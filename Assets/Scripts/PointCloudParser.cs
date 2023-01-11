using System;
using System.Linq;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.UI;

public class PointCloudParser : MonoBehaviour
{
    public ARPointCloudManager pointCloudManager;
    public Camera arCamera;
    public Text countStr;
    private List<PlaneDetection> planes = new List<PlaneDetection>();
    private List<PointDetection> detectedPoints = new List<PointDetection>();

    public float minDist = 0.01f;
    public int minInliers = 10;
    public int maxIter = 100;
    public int planeLifetime = 1;
    public int pointLifetime = 10;

    public GameObject planeSzinPrefab;
    public GameObject planeFonakPrefab;
    public GameObject planeClickedPrefab;
    public GameObject pointPrefab;

    private GameObject planeClickedSzin;
    private GameObject planeClickedFonak;

    public GameObject arCameraObject;

    public Button button;

    private bool detectPlanes = true;

    private void OnEnable()
    {
        pointCloudManager.pointCloudsChanged += PointCloudChanged;
        button.onClick.AddListener(Clear);
    }

    private void Clear()
    {
        for (int i = 0; i < planes.Count; i++)
        {
            planes[i].age++;
            if (planes[i].age > planeLifetime)
            {
                Destroy(planes[i].spawnedPlaneSzin);
                Destroy(planes[i].spawnedPlaneFonak);
                planes.RemoveAt(i);
                i--;
            }
        }

        for (int i = 0; i < detectedPoints.Count; i++)
        {
            detectedPoints[i].age++;
            if (detectedPoints[i].age > pointLifetime)
            {
                detectedPoints.RemoveAt(i);
                i--;
            }
        }
    }

    private void PointCloudChanged(ARPointCloudChangedEventArgs obj)
    {
        foreach (var pointCloud in obj.added)
        {
            foreach (var pos in pointCloud.positions)
            {
                detectedPoints.Add(new PointDetection(pos, 0));
            }
        }
        foreach (var pointCloud in obj.updated)
        {
            foreach (var pos in pointCloud.positions)
            {
                detectedPoints.Add(new PointDetection(pos, 1));
            }
        }

        Clear();

        List<Vector3> points = new List<Vector3>();
        foreach (var p in detectedPoints)
        {
            points.Add(p.pos);
        }
        CollectPlanes(points);
        countStr.text = $"{planes.Count} planes";

        if (Input.touchCount > 0)
        {
            planeClickedPrefab.SetActive(false);
            detectPlanes = true;
            // Destroy(planeClickedSzin);
            // Destroy(planeClickedFonak);
            if (planes.Count == 0)
            {
                return;
            }
            Touch touch = Input.GetTouch(0);
            Ray ray = arCamera.ScreenPointToRay(touch.position);
            float enter = 0.0f;
            float minEnter = float.MaxValue;
            Plane minPlane = planes[0].plane;
            foreach (var pd in planes)
            {
                if (pd.plane.Raycast(ray, out enter))
                {
                    if (enter < minEnter)
                    {
                        minEnter = enter;
                        minPlane = pd.plane;
                    }
                }
            }
            Vector3 hitPoint = ray.GetPoint(minEnter);
            // planeClickedSzin = Instantiate(planeClickedPrefab, hitPoint, Quaternion.FromToRotation(Vector3.up, minPlane.normal));
            // planeClickedFonak = Instantiate(planeClickedPrefab, hitPoint, Quaternion.FromToRotation(Vector3.up, minPlane.flipped.normal));
            

            Vector3 cameraPos = arCameraObject.transform.position;
            if (!minPlane.GetSide(cameraPos)) {
                minPlane = minPlane.flipped;
            }

            planeClickedPrefab.transform.position = hitPoint;
            planeClickedPrefab.transform.rotation = Quaternion.FromToRotation(Vector3.up, minPlane.normal);
            planeClickedPrefab.SetActive(true);
            detectPlanes = false;
            Clear();
        }
    }

    void CollectPlanes(List<Vector3> points)
    {
        while (detectPlanes)
        {
            // check if point cloud is empty
            if (points.Count == 0)
            {
                // Debug.LogError("No points in point cloud!");
                return;
            }
            if (points.Count < 3)
            {
                // Debug.LogError("Not enough points in point cloud!");
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
                // Debug.LogError("Too few inliers!");
                return;
            }

            Vector3 center = new Vector3(0, 0, 0);
            foreach (var i in bestInliers)
            {
                center += i;
            }
            center /= bestInliers.Count;
            // add plane to plane list

            planes.Add(new PlaneDetection(
                bestPlane,
                Instantiate(
                    planeSzinPrefab,
                    center,
                    Quaternion.FromToRotation(Vector3.up, bestPlane.normal)
                ),
                Instantiate(
                    planeFonakPrefab,
                    center,
                    Quaternion.FromToRotation(Vector3.up, bestPlane.flipped.normal)
                )
            ));

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
            float dist = Math.Abs(plane.GetDistanceToPoint(point));
            if (dist < minDist)
            {
                inliers.Add(point);
            }
        }

        return inliers;
    }

    class PlaneDetection
    {
        public PlaneDetection(Plane p, GameObject szin, GameObject fonak)
        {
            plane = p;
            spawnedPlaneSzin = szin;
            spawnedPlaneFonak = fonak;
            age = 1;
        }
        public Plane plane;
        public GameObject spawnedPlaneSzin;
        public GameObject spawnedPlaneFonak;
        public int age { get; set; }
    }

    class PointDetection
    {
        public PointDetection(Vector3 pos, int age)
        {
            this.pos = pos;
            this.age = age;
        }

        public Vector3 pos { get; set; }
        public int age { get; set; }
    }
}
