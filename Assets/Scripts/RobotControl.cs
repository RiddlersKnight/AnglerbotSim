using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class RobotControl : MonoBehaviour
{
    public Text posText;

    public Vector3 pos = Vector3.zero;
    private bool posKnown;

    private LayerMask tagMask;

    private void Awake() {
        tagMask = LayerMask.GetMask("Tags");
    }

    // Perform acoustic trilateration to estimate the robot's position
    private void Update() {
        Collider[] cols = Physics.OverlapSphere(transform.position, 100, tagMask);
        int numCols = cols.Length;
        // print(numCols);
        if(numCols > 2) {
            List<float> dists = new List<float>();
            List<Vector3> poses = new List<Vector3>();
            for(int i = 0; i < numCols; i++) {
                // print(cols[i].transform.position);
                RaycastHit hit;
                float dist = Vector3.Distance(cols[i].transform.position, transform.position);
                if(Physics.Raycast(transform.position, cols[i].transform.position - transform.position, out hit, 100, tagMask)) {
                    // print(dist);
                    dists.Add(dist);
                    poses.Add(cols[i].transform.position);
                }
            }
            if(dists.Count > 2) {
                float U = Vector3.Distance(poses[0], poses[1]);
                float dist02 = Vector3.Distance(poses[0], poses[2]);
                float dist12 = Vector3.Distance(poses[1], poses[2]);

                float Vx = (dist02*dist02 - dist12*dist12 + U*U)/(2*U);
                float Vy = Mathf.Sqrt(dist02*dist02 - Vx*Vx);
                // print(Vx + ", " + Vy);

                float x = (dists[0]*dists[0] - dists[1]*dists[1] + U*U) / (2*U);
                float y = (dists[0]*dists[0] - dists[2]*dists[2] + Vx*Vx + Vy*Vy - 2*Vx*x)/(2*Vy);
                float z = Mathf.Sqrt(dists[0]*dists[0] - x*x - y*y);
                // print(x + ", " + y + ", " + z);

                // print("Magnitude Check: " + poses[0].magnitude + ", " + new Vector3(x, y, z).magnitude);

                Vector3 vectX = (poses[1] - poses[0]).normalized;
                // print("Vect X: " + vectX);
                Vector3 posX0 = poses[0] + x * vectX;
                // print("Pos X0: " + posX0);

                Vector3 vectY = (poses[2] - (poses[0] + vectX * Vx)).normalized;
                // print("Vect Y: " + vectY);
                // print("Perp check: VectX and VectY: " + Vector3.Dot(vectX, vectY));
                Vector3 posXY = posX0 + y * vectY;
                // print("Pos XY: " + posXY);

                Vector3 vectZ = Vector3.Cross(vectX, vectY).normalized;
                // print("Vect Z: " + vectZ);
                // print("Perp check: VectX and VectZ: " + Vector3.Dot(vectX, vectZ));
                // print("Perp check: VectY and VectZ: " + Vector3.Dot(vectY, vectZ));
                pos = posXY + z * vectZ;
                // print("Robot pos: " + pos);
                posKnown = true;
            } else {
                posKnown = false;
            }
        } else {
            posKnown = false;
        }

        if(posKnown) {
            posText.text = "Position: " + pos;
        } else {
            posText.text = "Position: (?, ?, ?)";
        }
    }
}
