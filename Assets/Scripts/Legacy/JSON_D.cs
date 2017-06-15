//using UnityEngine;
//using LitJson;
//using System;
//using System.Collections;
//using System.Net;
//using System.IO;
//using System.Text;
//
//
//public class parseJSON
//{
//	public string title;
//	public string id;
//	public ArrayList but_title;
//	public ArrayList but_image;
//}
//public class JSON_D : MonoBehaviour
//{
//	// Sample JSON for the following script has attached.
//	IEnumerator Start()
//	{
//
//
//
//
//		WWWForm form = new WWWForm();
//		form.AddField( "username", "mothership" );
//		form.AddField( "password", "mothership1" );
//		Hashtable headers = form.headers;
//		byte[] rawData = form.data;
//		string url = "https://api.immoviewer.com/rest/v1/tour/582353acaf41d43251f1160f";
//
//		// Add a custom header to the request.
//		// In this case a basic authentication to access a password protected resource.
//		headers["Authorization"] = "Basic " + System.Convert.ToBase64String(
//			System.Text.Encoding.ASCII.GetBytes("motherhsip:motherhsip1"));
//
//		// Post a request to an URL with our custom headers
//		WWW www = new WWW(url, null, headers);
//		yield return www;
//		//.. process results from WWW request here...
//
//
//
//
//
////		var form = new WWWForm();
////
////		form.AddField( "username", "mothership" );
////		form.AddField( "password", "mothership1" );
////
////		var headers = form.headers;
////		var rawData = form.data;
////		var url = "https://api.immoviewer.com/rest/v1/tour/582353acaf41d43251f1160f";
////
////		headers["Authorization"]="Basic " + System.Convert.ToBase64String(
////			System.Text.Encoding.ASCII.GetBytes("motherhsip:motherhsip1"));
////		var www = new WWW(url, null, headers);
////		yield return www;
////
////		if(www.error == null) {
////			print("There was an error: " + www.error);
////		}else{
////			print(www.text);
////		}
//
//	
//
//
//
//
//
//
//
//
//
//
////	WWW www = new WWW("https://jsonplaceholder.typicode.com");
////			yield return www;
////		Debug.Log (www.text);
//		
//
//
//
//	}
//
//
//
//
//
//
//
//
//
//
////		if (www.error == null)
////		{
////			Debug.Log(www.text);
////		}
////		else
////		{
////			Debug.Log("ERROR: " + www.error);
////		}        
////	}   
//
//
////	private string LoadHttpPageWithDigestAuthentication(string url, string username, string password)
////	{
////		Uri myUri = new Uri(url);
////		WebRequest myWebRequest = HttpWebRequest.Create(myUri);
////
////		HttpWebRequest myHttpWebRequest = (HttpWebRequest)myWebRequest;
////
////		NetworkCredential myNetworkCredential = new NetworkCredential(username, password);
////
////		CredentialCache myCredentialCache = new CredentialCache();
////		myCredentialCache.Add(myUri, "Digest", myNetworkCredential);
////
////		myHttpWebRequest.PreAuthenticate = true;
////		myHttpWebRequest.Credentials = myCredentialCache;
////
////		WebResponse myWebResponse = myWebRequest.GetResponse();
////
////		Stream responseStream = myWebResponse.GetResponseStream();
////
////		StreamReader myStreamReader = new StreamReader(responseStream, Encoding.Default);
////
////		string pageContent = myStreamReader.ReadToEnd();
////
////		responseStream.Close();
////
////		myWebResponse.Close();
////
////		return pageContent;
////	}
//		
//
//
//	private void Processjson(string jsonString)
//	{
//		JsonData jsonvale = JsonMapper.ToObject(jsonString);
//		parseJSON parsejson;
//		parsejson = new parseJSON();
//		parsejson.title = jsonvale["title"].ToString();
//		parsejson.id = jsonvale["ID"].ToString();
//
//		parsejson.but_title = new ArrayList ();
//		parsejson.but_image = new ArrayList ();
//
//		for(int i = 0; i<jsonvale["buttons"].Count; i++)
//		{
//			parsejson.but_title.Add(jsonvale["panoramas"][i]["filename"].ToString());
////			parsejson.but_image.Add(jsonvale["buttons"][i]["image"].ToString());
//		} 
//
////		Debug.Log ("Bla" + parsejson.but_title.ToString());
//
//
//
//
//
//	}
//
//
//
//}