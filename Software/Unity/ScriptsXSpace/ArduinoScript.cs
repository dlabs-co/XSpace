using UnityEngine;
using System.Collections;
using System.IO.Ports;



public class ArduinoScript : MonoBehaviour {
	SerialPort stream = new SerialPort("COM14", 9600);
	// Use this for initialization
	void Start () {
		Debug.Log ("Initial Arduino");
		OpenConnection ();
		Debug.Log ("Hola");
		stream.ReadTimeout = 50;

	}
	
	// Update is called once per frame
	void Update () {
		Debug.Log ("Update Arduino");
		WriteToArduino ("PING");

	}

	public void OpenConnection() 
	{
		if (stream != null) 
		{
			if (stream.IsOpen) 
			{
				stream.Close();
				print("Closing port, because it was already open!");
			}
			else 
			{
				stream.Open();  // opens the connection
				stream.ReadTimeout = 16;  // sets the timeout value before reporting error
				print("Port Opened!");
				//		message = "Port Opened!";
			}
		}
		else 
		{
			if (stream.IsOpen)
			{
				print("Port is already open");
			}
			else 
			{
				print("Port == null");
			}
		}
	}

	public void WriteToArduino (string message){

		stream.WriteLine(message);
		stream.BaseStream.Flush();
	}

	public string ReadFromArduino(int timeout = 0){
		stream.ReadTimeout = timeout;
		try{
			return stream.ReadLine();	
		}
		catch{
			return null;
		}
	}

	/*public IEnumerator AsynchronousReadFromArduino(Action<string> callback, Action fail=null, float timeout = float.PositiveInfinity ){
		DateTime initialTime = DateTime.Now;

	
	}*/
}



