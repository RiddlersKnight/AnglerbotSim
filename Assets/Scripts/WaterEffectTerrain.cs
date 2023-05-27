using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WaterEffectTerrain : MonoBehaviour {

	public float fps=30.0f;
	public int terrainLayerIndex;
	public Texture2D[] frames;

	private int frameIndex;
	private Terrain terrain;

	private TerrainLayer layer;

	void Start(){
		terrain = GetComponent<Terrain> ();
		layer = terrain.terrainData.terrainLayers[terrainLayerIndex];
		NextFrame();
		InvokeRepeating ("NextFrame", 1 / fps, 1 / fps);
	}

	void NextFrame(){
		layer.diffuseTexture = frames [frameIndex];
		//projector.material.SetTexture ("_ShadowTex", frames [frameIndex]);
		frameIndex = (frameIndex + 1) % frames.Length;
	}

}
