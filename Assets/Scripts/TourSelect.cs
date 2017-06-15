using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class TourSelect : MonoBehaviour {

		void Start()
		{
			
		}

	public void loadScene(){
		DontDestroyOnLoad(GameObject.FindGameObjectWithTag("idstorer"));
		if(SceneManager.GetActiveScene().name == "Tour")
		SceneManager.LoadScene("WorldOutside", LoadSceneMode.Single);
		else SceneManager.LoadScene("Tour", LoadSceneMode.Single);
	}

	}
