using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SphereStorer : MonoBehaviour {
	public GameObject[] currentSphere;


	// Use this for initialization
	void Start () {
		currentSphere = new GameObject[20];

	}

	public void destroy(){
		for(int i = 0; i< currentSphere.Length; i++){
			Destroy (currentSphere [i]);
		}
		currentSphere = new GameObject[20];
	}


}
