using UnityEngine;
using System.Collections;
using System;
using System.IO;

public class FileArduino : MonoBehaviour {

	public static string  fileName = "com.txt";
	// Use this for initialization
	void Start () {
		if (File.Exists (fileName)) {
			Debug.Log (fileName + " already exists.");
			return;
		} else {
			var sr = File.CreateText(fileName);
		}
			
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public static void writeMSG(string message){
		/*if (File.Exists(fileName))
		{
			Debug.Log(fileName+" already exists.");
			return;
		}*/
		var sr = File.CreateText(fileName);
		sr.WriteLine (message);
		sr.Close();
	
	}

	public static void writeFile(){
		if (File.Exists(fileName))
		{
			Debug.Log(fileName+" already exists.");
			return;
		}
		var sr = File.CreateText(fileName);
		sr.WriteLine ("New Message");
		sr.Close();

	}
}



