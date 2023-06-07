using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TagBeamAdjuster : MonoBehaviour {
    public Transform[] tagsTopAndBottom = new Transform[2];
    public Transform cable;

    public Transform[] beams;

    private float absorbance = Mathf.Log10(1/0.1f);

    private void Awake() {
        cable.position = (tagsTopAndBottom[0].position + tagsTopAndBottom[1].position) / 2f;
        cable.localScale = new Vector3(0.01f, Vector3.Distance(tagsTopAndBottom[0].position,tagsTopAndBottom[1].position) / 2f, 0.01f);
    }

    private void OnEnable() {
        underwaterEffect.OnBeamLengthChanged += UpdateBeamLength;
    }

    private void OnDisable() {
        underwaterEffect.OnBeamLengthChanged -= UpdateBeamLength;
    }

    // Update the beam length based on a previously calculated value from a modified Beer-Lambert 
    private void UpdateBeamLength(float beamLength) {
        // print("Got the action! " + density);
        //float length = 1f - 0.9f * density;
        float width = beamLength * 0.05f;

        for(int i = 0; i < beams.Length; i++) {
            beams[i].localScale = new Vector3(width, width, beamLength);
        }
    }
}
