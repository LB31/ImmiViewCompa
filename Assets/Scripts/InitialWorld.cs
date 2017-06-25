using UnityEngine;
using System.Collections;
using System.IO;
using LitJson;
using System.Collections.Generic;

public class InitialWorld : MonoBehaviour
{
	public string url;
	int panoramaNumber = 0;
	public JSONAnalyzerGetter dataJSON;
	public CreateSpheres initSpheres;
	private bool isStart = true;
	public JsonData itemData;
	public Dictionary<string, int> dictionary = new Dictionary<string, int> ();
	public Texture2D[] tex;


	void Start ()
	{
		tex = new Texture2D[10];
		itemData = dataJSON.itemData;
		StartCoroutine (setTexture (panoramaNumber));



	}

	public IEnumerator setTexture (int panoramaNumber)
	{

		if (isStart) {

			for (int i = 0; i < itemData ["panoramas"].Count; i++) {
				tex [i] = new Texture2D (4, 4, TextureFormat.DXT1, false);
			
				url = (string)itemData ["panoramas"] [i] ["fileUrls"] ["ORIGINAL_PATH"];
//					url = (string)itemData ["panoramas"] [i] ["fileUrls"]["SMALL"];


				string name = (string)itemData ["panoramas"] [i] ["name"];
				dictionary.Add (name, i);
				WWW www = new WWW (url);
				yield return www;
				www.LoadImageIntoTexture (tex [i]);		
			}

			isStart = false;
			GameObject navPrefab = (GameObject)Resources.Load ("Prefabs/NavigationPrefabInv");
			initSpheres = navPrefab.GetComponent<CreateSpheres> ();
			initSpheres.createSpheres ((string)(itemData ["panoramas"] [panoramaNumber] ["name"]));

		}

		GetComponent<Renderer> ().material.mainTexture = tex [panoramaNumber];

	}







}