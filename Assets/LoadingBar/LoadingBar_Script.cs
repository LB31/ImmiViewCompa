using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LoadingBar_Script : MonoBehaviour {

	public Transform LoadingBar;
	public Transform Text_Indicator;
	public Transform Text_Loading;
	[SerializeField] private float currentAmount;
	[SerializeField] private float speed;


	
	// Update is called once per frame
	void Update () 
	{
		if (currentAmount < 100) 
		{
			currentAmount += speed * Time.deltaTime;
			Text_Indicator.GetComponent<Text>().text = ((int)currentAmount).ToString() + "%";
			Text_Loading.gameObject.SetActive (true);
		} 
		else 
		{
			Text_Loading.gameObject.SetActive (false);
			Text_Indicator.GetComponent<Text>().text = "DONE!";
		}
		LoadingBar.GetComponent<Image> ().fillAmount = currentAmount / 100;
	}
}
