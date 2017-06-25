using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using LitJson;


public class CreateSpheres : MonoBehaviour
{
	


	public SphereStorer storer;
	public InitialWorld world;

	public double hotspotVPos;
	private double hotspotHPos;
	public string namePanorama;
	public int panoramaID;
	public CreateSpheres refObject;



	public string stringData;
	private JsonData itemData;


	void Start ()
	{

	}


	public void createSpheres (string name)
	{
		GameObject nav = (GameObject)Resources.Load ("Prefabs/NavigationPrefabInv");
		GameObject ourWorld = GameObject.FindGameObjectWithTag ("World");
		GameObject sphereStorer = GameObject.FindGameObjectWithTag ("Storer");


		world = ourWorld.GetComponent<InitialWorld> ();
		storer = sphereStorer.GetComponent<SphereStorer> ();
	
		//get the json data, pass string is better than jsonData
		JsonData itemData = world.dataJSON.itemData;

		for (int i = 0; i < itemData ["panoramas"].Count; i++) {
			// Check if the parameter name is inside the current panorama
			if (name == (string)itemData ["panoramas"] [i] ["name"]) {
				// Set texture
				world.StartCoroutine (world.setTexture (i));

				// Get the hotspots
				for (int j = 0; j < itemData ["panoramas"] [i] ["hotspots"].Count; j++) {
					// Vertical position
					hotspotVPos = (double)itemData ["panoramas"] [i] ["hotspots"] [j] ["hotspotHPos"];
					// Horizontal position
					hotspotHPos = (double)itemData ["panoramas"] [i] ["hotspots"] [j] ["hotspotVPos"];
					// Name of the room the hotspot is pointing to
					namePanorama = (string)itemData ["panoramas"] [i] ["hotspots"] [j] ["namePanorama"];




					// Create new sphere and store it in the SphereStorer script
					storer.currentSphere [j] = Instantiate (nav, new Vector3 (0, 0, 0), Quaternion.identity);
					refObject = storer.currentSphere [j].GetComponent<CreateSpheres> ();
					refObject.namePanorama = namePanorama;
					refObject.panoramaID = i;
					// Move the current sphere to the right position
					Vector3 targPosH = new Vector3 (getSpherePosition ((float)hotspotHPos), getSpherePosition ((float)hotspotVPos), 0); 
					storer.currentSphere [j].transform.Rotate (targPosH);
					storer.currentSphere [j].transform.Translate (Vector3.forward * 10);

				}
			}
		}
	}

	public float getSpherePosition (float originPos)
	{

		float result = (360f / 400f) * originPos;
	
		return result;
	}


	public void Interact ()
	{


		storer.destroy ();

		createSpheres (namePanorama);

	}

	public void hover ()
	{

		int test;

		if (world.dictionary.TryGetValue (namePanorama, out test)) {

			GetComponent<Renderer> ().material.mainTexture = world.tex [test];
			GetComponent<Renderer> ().transform.localScale += new Vector3 (3F, 3F, 3F);
		}

	}

	public void exitHover ()
	{


		GetComponent<Renderer> ().material.mainTexture = (Texture)Resources.Load ("blue");
		GetComponent<Renderer> ().transform.localScale -= new Vector3 (3F, 3F, 3F);
	}

	void Update ()
	{
		GetComponent<Renderer> ().transform.Rotate (new Vector3 (0, 30, 0) * Time.deltaTime);
	}


}