// Add this script to a GameObject. The Start() function fetches an
// image from the documentation site.  It is then applied as the
// texture on the GameObject.

using UnityEngine;
using System.Collections;
using System.IO;
using SimpleJSON;


public class AssignMesh : MonoBehaviour
{
//	string jsonPath = "https://virtualtours.sandbox-immobilienscout24.de/rest/v1/tour/582353acaf41d43251f1160f";


	public string url = "https://images-virtualtours.sandbox-immobilienscout24.de/items/mothership/582353acaf41d43251f11610/Tour/1080-images/Flur41946209.jpg";


	IEnumerator Start()
	{
		









		Texture2D tex;
		tex = new Texture2D(4, 4, TextureFormat.DXT1, false);
		WWW www = new WWW(url);
		yield return www;
		www.LoadImageIntoTexture(tex);
		GetComponent<Renderer>().material.mainTexture = tex;
	}






}