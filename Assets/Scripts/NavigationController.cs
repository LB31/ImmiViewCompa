using UnityEngine;
using System.Collections;

public class NavigationController : MonoBehaviour {
	public Vector3 lastPosition;
	private int run = 1;




	// Use this for initialization
	void Start() {
		lastPosition = transform.position;
	}

	public void LookAtSphere() {
//		if (lastPosition.z != -8) {
//			CClastPosition = new Vector3(lastPosition.x, lastPosition.y, lastPosition.z - 0.5f);
//			transform.position = lastPosition;
//		}


//		Material newMat = Resources.Load("PAN" + run, typeof(Material)) as Material;
//		GameObject.FindWithTag("World").GetComponent<Renderer>().material = newMat;

		Texture newTexture = Resources.Load("Image" + run, typeof(Texture)) as Texture;
		GameObject.FindWithTag ("World").GetComponent<Renderer> ().material.mainTexture = newTexture;

//		System.Threading.Thread.Sleep(1000);
		run++;
		if (run == 3)
			run = 0;

	}
}