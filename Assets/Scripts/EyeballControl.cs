using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EyeballControl : MonoBehaviour
{
    public bool inBeam = false;
    public bool aligned = false;

    public float spinAngle = 0;
    public float spinRate = 60;

    public float beamAngle = 0;
    public float alignAngle = 0;
    public float alignRate = 1;
    public float lastAlignStrength = 999;

    private Rigidbody rb;

    private void Awake() {
        rb = GetComponent<Rigidbody>();
    }

    private void Update() {
        if(!aligned) {
            if(inBeam) { // Align with the light source!
                if(!aligned) {
                    transform.localRotation = Quaternion.Lerp(transform.localRotation, Quaternion.Euler(alignAngle, 0, 0), Time.deltaTime);
                    float eyeAngle = transform.localEulerAngles.x;
                    if(eyeAngle > 180) {
                        eyeAngle -= 360;
                    }
                    print("eye: " + eyeAngle + "beam: " + beamAngle);
                    float alignStrength = Mathf.Abs(eyeAngle - beamAngle);
                    if(alignStrength < 1f) { // Aligned
                        aligned = true;
                        // Start talking to the tag
                    }
                    if(alignStrength > lastAlignStrength) {
                        alignRate = -alignRate;
                    }
                    alignAngle = (alignAngle + alignRate * Time.deltaTime) % 360f;
                    lastAlignStrength = alignStrength;
                }
            } else { // Search pattern - Spin the camera in a circle
                transform.parent.localRotation = Quaternion.Lerp(transform.parent.localRotation, Quaternion.Euler(-90, 0, spinAngle), Time.deltaTime);
                transform.localRotation = Quaternion.Lerp(transform.localRotation, Quaternion.identity, Time.deltaTime);
                spinAngle = (spinAngle + spinRate * Time.deltaTime) % 360f;
            }
        }
    }

    private void OnTriggerStay(Collider col) {
        // Check if the trigger is a light beam.
        if(col.tag.Equals("TagBeam")) {
            //print("Eye: " + transform.rotation.eulerAngles.z + ", Beam: " + col.transform.parent.rotation.eulerAngles.z);
            // Only detect that the camera sensor is in the beam when it is facing towards the light source
            if(Mathf.Abs((transform.parent.rotation.eulerAngles.y + 180) % 360f - (col.transform.parent.rotation.eulerAngles.z) % 360f) < 1f) {
                if(!inBeam) {
                    print("Eye: " + transform.parent.rotation.eulerAngles.y + ", Beam: " + col.transform.parent.rotation.eulerAngles.z);
                    inBeam = true;
                    alignRate = Mathf.Abs(alignRate);
                    alignAngle = 0;
                    lastAlignStrength = 999;
                    beamAngle = col.transform.rotation.eulerAngles.x;
                    if(beamAngle > 180) {
                        beamAngle -= 360;
                    }
                    beamAngle = -beamAngle;
                }
            } else {
               inBeam = false;
            }
        }
    }

    private void OnTriggerExit(Collider col) {
        // Check if the trigger is a light beam.
        if(col.tag.Equals("TagBeam")) {
            inBeam = false;
            aligned = false;
        }
    }
}
