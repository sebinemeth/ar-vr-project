using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.UI;

public class PointCloudParser : MonoBehaviour
{
    public ARPointCloudManager pointCloudManager;
    public ARPlaneManager arPlaneManager;
    public Text countStr;
    public List<GameObject> planes = new List<GameObject>();
    public List<GameObject> inliers = new List<GameObject>();
    public bool verbose = false;

    public float minDist = 0.01f;
    public int minInliers = 10;
    public int maxIter = 100;

    public GameObject planeSzinPrefab;
    public GameObject planeFonakPrefab;
    public GameObject pointPrefab;

    public Button button;

    private void OnEnable()
    {
        pointCloudManager.pointCloudsChanged += PointCloudChanged;
        button.onClick.AddListener(Clear);
    }

    private void Clear()
    {
        foreach (var i in inliers)
        {
            Destroy(i);
        }
        foreach (var p in planes)
        {
            Destroy(p);
        }
        inliers.Clear();
        planes.Clear();

    }

    private void PointCloudChanged(ARPointCloudChangedEventArgs obj)
    {
        List<Vector3> addedPoints = new List<Vector3>();
        foreach (var pointCloud in obj.added)
        {
            foreach (var pos in pointCloud.positions)
            {
                addedPoints.Add(pos);
            }
        }
        List<Vector3> updatedPoints = new List<Vector3>();
        foreach (var pointCloud in obj.updated)
        {
            foreach (var pos in pointCloud.positions)
            {
                updatedPoints.Add(pos);
            }
        }

        Clear();

        CollectPlanes(updatedPoints);
        countStr.text = $"{planes.Count} planes";
    }

    void CollectPlanes(List<Vector3> points)
    {
        while (true)
        {
            // check if point cloud is empty
            if (points.Count == 0)
            {
                if (verbose) Debug.LogError("No points in point cloud!");
                return;
            }
            if (points.Count < 3)
            {
                if (verbose) Debug.LogError("Not enough points in point cloud!");
                return;
            }

            Plane bestPlane = new Plane(points[0], points[1], points[2]);
            List<Vector3> bestInliers = new List<Vector3>();

            // detect planes using RANSAC algorithm
            for (int i = 0; i < maxIter; i++)
            {
                Plane randomPlane = GetRandomPlane(points);
                List<Vector3> inliers = GetInliers(randomPlane, points);

                if (inliers.Count > bestInliers.Count)
                {
                    bestPlane = randomPlane;
                    bestInliers = inliers;
                }
            }

            if (bestInliers.Count < minInliers)
            {
                if (verbose) Debug.LogError("Too few inliers!");
                return;
            }

            if (true /*planes.Count < 1*/)
            {
                Vector3 center = new Vector3(0, 0, 0);
                foreach (var i in bestInliers)
                {
                    center += i;
                }
                center /= bestInliers.Count;
                // add plane to plane list
                planes.Add(Instantiate(
                    planeSzinPrefab,
                    center,
                    Quaternion.FromToRotation(Vector3.up, bestPlane.normal)
                //new Quaternion(bestPlane.normal.x, bestPlane.normal.y, bestPlane.normal.z, 1)
                ));
                planes.Add(Instantiate(
                    planeFonakPrefab,
                    center,
                    Quaternion.FromToRotation(Vector3.up, bestPlane.flipped.normal)
                //new Quaternion(bestPlane.flipped.normal.x, bestPlane.flipped.normal.y, bestPlane.flipped.normal.z, 1)
                ));

                foreach (var i in bestInliers)
                {
                    inliers.Add(Instantiate(pointPrefab, i, Quaternion.identity));
                }
            }

            // remove bestInliers from point cloud
            for (int i = 0; i < bestInliers.Count; i++)
            {
                points.Remove(bestInliers[i]);
            }
        }
    }

    Plane GetRandomPlane(List<Vector3> points)
    {
        int[] indices = new int[3];
        System.Random random = new System.Random();

        for (int i = 0; i < 3; i++)
        {
            indices[i] = random.Next(points.Count);
        }

        List<Vector3> randomPoints = new List<Vector3>();

        for (int i = 0; i < indices.Length; i++)
        {
            randomPoints.Add(points[i]);
        }

        Plane plane = new Plane(randomPoints[0], randomPoints[1], randomPoints[2]);

        return plane;
    }

    List<Vector3> GetInliers(Plane plane, List<Vector3> points)
    {
        List<Vector3> inliers = new List<Vector3>();

        foreach (Vector3 point in points)
        {
            float dist = plane.GetDistanceToPoint(point);
            if (dist < minDist)
            {
                inliers.Add(point);
            }
        }

        return inliers;
    }
}
