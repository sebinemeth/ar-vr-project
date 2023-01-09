using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.UI;

public class PointCloudParser : MonoBehaviour
{
    public ARPointCloudManager pointCloudManager;
    public ARPlaneManager arPlaneManager;

    public Text countStr;

    private void OnEnable()
    {
        pointCloudManager.pointCloudsChanged += PointCloudChanged;
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

        Vector3 last = updatedPoints[updatedPoints.Count - 1];
        countStr.text = $"{updatedPoints.Count} [{last.x} {last.y} {last.z}]";
    }
}
