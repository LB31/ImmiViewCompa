using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using LitJson;

public class JSONAnalyzerGetter: MonoBehaviour {
	public WWW output;
	public string abc;
	public string url = "https://virtualtours.sandbox-immobilienscout24.de/rest/v1/tour/582353acaf41d43251f1160f";
	public JsonData itemData;


	void GetTour() {
		WWWForm form = new WWWForm();
		Dictionary < string, string > headers = form.headers;
		headers["Authorization"] = "Basic " + System.Convert.ToBase64String(System.Text.Encoding.ASCII.GetBytes("mothership:mothership1"));
		WWW www = new WWW(url, null, headers);

		while (!www.isDone) {
		}

//		yield return www;

		abc = www.text;
//		while(!abc.Contains("}")){
//			yield return null;
//		}
//
//		string jsonString = abc;
		itemData = JsonMapper.ToObject (abc);
		//Debug.Log ("getter " + jsonString);
	}
	void Awake() {
		GetTour();



	}



}