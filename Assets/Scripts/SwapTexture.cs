using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SwapTexture : MonoBehaviour {


	public Material[] myTextures = new Material[5];
	int maxTextures;
	int arrayPos = 0;

	void Start ()
	{
		maxTextures = myTextures.Length-1;
	}


	void Update ()
	{
		if (Input.GetKeyDown(KeyCode.U))
		{
			// this.GetComponent<Renderer>().material.SetTexture()); 
				



		}  
	}

	}




