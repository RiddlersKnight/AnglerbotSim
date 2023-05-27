using UnityEngine;
using UnityEngine.UI;
using System;
using System.Collections;

public class underwaterEffect : MonoBehaviour
{
    public Slider fogSlider;
    public float waterHeight;
    public float fogDensity = 0.02f;

    public static event Action<float> OnFogDensityChanged;

    private bool isUnderwater;
    private Color normalColor;
    private Color underwaterColor;

    private float min = 0;
    private float mid = 0.1f;
    private float max = 1;

    private float expA = 0;
    private float expB = 0;
    private float expC = 0;

    void Awake()
    {
        normalColor = new Color(1f, 1f, 1f, 1f);
        underwaterColor = new Color(0.22f, 0.65f, 0.77f, 0.5f);

        if(fogSlider != null) {
            expA = (min * max - mid * mid) / (min - 2 * mid + max);
            expB = ((mid - min) * (mid - min)) / (min - 2 * mid + max);
            expC = 2 * Mathf.Log((max - mid) / (mid - min));

            fogSlider.onValueChanged.AddListener(OnFogSliderChanged);
        }
    }

    void Update(){
        if ((transform.position.y < waterHeight) != isUnderwater)
        {
            // print(transform.position.y);
            // print(waterHeight);
            isUnderwater = transform.position.y < waterHeight;
            if (isUnderwater) SetUnderwater();
            if (!isUnderwater) SetNormal();
        }
    }

    void SetNormal()
    {
        RenderSettings.fogColor = normalColor;
        RenderSettings.fogDensity = 0f;
        OnFogDensityChanged(1f);
    }

    void SetUnderwater()
    {
        RenderSettings.fogColor = underwaterColor;
        RenderSettings.fogDensity = fogDensity;
        OnFogDensityChanged(fogDensity);
    }

    private void OnFogSliderChanged(float val) {
        fogDensity = expA + expB * Mathf.Exp(expC * val);
        // print(fogDensity);
        if(isUnderwater) {
            SetUnderwater();
        }
    }
}