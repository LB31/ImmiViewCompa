using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class cubeMover : MonoBehaviour {
	public Vector3 lastPosition;
	public float target = 270.0F;
	public float speed = 45.0F;
	private Vector3 currentPosition;
	public float thrust;
	public Rigidbody rb;

	// Use this for initialization
	void Start () {

		rb = GetComponent<Rigidbody>();

//			lastPosition = transform.position;
//
//		var rot = Quaternion.Euler(0, 90, 0); // rot = 45 degrees rotation around Y
//		var v45 = rot * Vector3.forward; // rotate vector forward 45 degrees around Y
//
//						lastPosition = new Vector3(lastPosition.x, lastPosition.y, lastPosition.z - 2.6f);

//
//		transform.position = transform.position - transform.up * 5;
//
//		transform.position = Vector3.MoveTowards(transform.position, targPos, speed);
//		transform.position = PolarCoordinates (90, 1);

		Vector3 targPosH = new Vector3(getPos(8.28f),getPos(6.42f), 0); // set somehow
		transform.Rotate(targPosH);
		transform.Translate(Vector3.forward * 10);


//		Vector3 targPosV = new Vector3(0,0,0); // set somehow
//		transform.Rotate(targPosV);
//
//			transform.Translate(Vector3.up * -8.8f);





	}
	
	// Update is called once per frame
	void Update () {
//		float angle = Mathf.MoveTowardsAngle(transform.eulerAngles.y, target, speed * Time.deltaTime);
//		transform.eulerAngles = new Vector3(0, angle, 0);
//		rb.AddForce(transform.forward * thrust);
	}



	public float getPos(float real){
		float back;
		back = ((real / (Mathf.PI * 20)) * (360 / (Mathf.PI * 20))) * 10;
		Debug.Log (back);
		return back;
	}






	public Vector3 PolarCoordinates(float angle, float radius)
	{
		// Assuming movement is on XY plane
		Vector3 relativePosition = new Vector3(radius * Mathf.Cos(angle), radius * Mathf.Sin(angle), 0);

		return currentPosition + relativePosition;
	}







}
