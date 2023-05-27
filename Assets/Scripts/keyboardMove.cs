using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class keyboardMove : MonoBehaviour {

	public float mSpeed;
    public GameObject vehicle;
	public Rigidbody rb;

	public Animator leftProp;
	public Animator rightProp;
	public Animator upProp;

	// Use this for initialization
	void Start () {
		mSpeed = 5f;
		// rb = GetComponent<Rigidbody>();
	}

	void FixedUpdate () {
		float leftPropeller = Input.GetAxis ("LeftPropeller");
		leftProp.SetFloat("PropellerSpeed", leftPropeller);
		float rightPropeller = Input.GetAxis ("RightPropeller");
		rightProp.SetFloat("PropellerSpeed", rightPropeller);
		float verticalPropeller = Input.GetAxis ("VerticalPropeller");
		upProp.SetFloat("PropellerSpeed", verticalPropeller);

		float forwardVel = leftPropeller + rightPropeller;
		float angularVel = leftPropeller - rightPropeller;

		Vector3 movement = new Vector3 (0, verticalPropeller, -forwardVel);
        rb.AddRelativeForce (movement * 0.5f);
		rb.AddRelativeTorque(transform.up * angularVel * 0.005f);

		if(transform.position.y > 0) {
			transform.position = new Vector3(transform.position.x, 0, transform.position.z);
		}
	}
}
