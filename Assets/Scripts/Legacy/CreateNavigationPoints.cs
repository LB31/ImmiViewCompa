using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CreateNavigationPoints : MonoBehaviour {

	// Use this for initialization
	void Start () {

		GameObject sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
		sphere.transform.position = new Vector3(0, 0, 5);
		sphere.GetComponent<Renderer> ().material.color = Color.green;


	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
