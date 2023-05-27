using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TagBeamAdjuster : MonoBehaviour {
    public Transform[] tagsTopAndBottom = new Transform[2];
    public Transform cable;

    public Transform[] beams;

    private void Awake() {
        cable.position = (tagsTopAndBottom[0].position + tagsTopAndBottom[1].position) / 2f;
        cable.localScale = new Vector3(0.01f, Vector3.Distance(tagsTopAndBottom[0].position,tagsTopAndBottom[1].position) / 2f, 0.01f);
    }

    private void OnEnable() {
        underwaterEffect.OnFogDensityChanged += UpdateBeamLength;
    }

    private void OnDisable() {
        underwaterEffect.OnFogDensityChanged -= UpdateBeamLength;
    }

    private void UpdateBeamLength(float density) {
        // print("Got the action! " + density);
        float length = 1f - 0.9f * density;
        float width = length * 0.05f;

        for(int i = 0; i < beams.Length; i++) {
            beams[i].localScale = new Vector3(width, width, length);
        }
    }
}
