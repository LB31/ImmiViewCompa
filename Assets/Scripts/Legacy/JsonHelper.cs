using System;
using UnityEngine;
using System.Collections;
using LitJson;



public static class JsonHelper
{
	public static T[] FromJson<T>(string jsonArray)
	{
		jsonArray = WrapArray (jsonArray);
		return FromJsonWrapped<T> (jsonArray);
	}

	public static T[] FromJsonWrapped<T> (string jsonObject)
	{
		Wrapper<T> wrapper = JsonUtility.FromJson<Wrapper<T>>(jsonObject);
		return wrapper.items;
	}

	private static string WrapArray (string jsonArray)
	{
		return "{ \"items\": " + jsonArray + "}";
	}

	public static string ToJson<T>(T[] array)
	{
		Wrapper<T> wrapper = new Wrapper<T>();
		wrapper.items = array;
		return JsonUtility.ToJson(wrapper);
	}

	public static string ToJson<T>(T[] array, bool prettyPrint)
	{
		Wrapper<T> wrapper = new Wrapper<T>();
		wrapper.items = array;
		return JsonUtility.ToJson(wrapper, prettyPrint);
	}

	[Serializable]
	private class Wrapper<T>
	{
		public T[] items;
		public string name;
	}


	public class parseJSON
	{
		public string title;
		public string id;
		public ArrayList but_title;
		public ArrayList but_image;
	}







//		private void Processjson(string jsonString)
//		{
//			JsonData jsonvale = JsonMapper.ToObject(jsonString);
//			parseJSON parsejson;
//			parsejson = new parseJSON();
//			parsejson.title = jsonvale["title"].ToString();
//			parsejson.id = jsonvale["ID"].ToString();
//	
//			parsejson.but_title = new ArrayList ();
//			parsejson.but_image = new ArrayList ();
//	
//			for(int i = 0; i<jsonvale["buttons"].Count; i++)
//			{
//				parsejson.but_title.Add(jsonvale["panoramas"][i]["filename"].ToString());
//	//			parsejson.but_image.Add(jsonvale["buttons"][i]["image"].ToString());
//			} 
//	
//			Debug.Log ("Bla" + parsejson.but_title.ToString());
//	
//	
//	
//	
//	
//		}










}

