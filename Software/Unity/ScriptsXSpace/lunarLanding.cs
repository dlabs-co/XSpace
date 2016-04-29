using UnityEngine;
using System.Collections;

public class lunarLanding : MonoBehaviour {

	public Transform target;
	public AudioClip Clip;
	public float playerSpeed = 30.0f;
	public float playerRotation = 10.0f;
	Vector3 direction = new Vector3 (0,0,1);

	bool boolEvent = false;
	// handles
	[SerializeField] private Transform _bullseye;    // target transform

	// Editor variables
	[Range(1f, 6f)] public float _targetRange;  
	[Range(20f, 70f)] public float _angle;      // shooting angle

	private bool _targetReady;

	private void AcquireTarget(){   
		Vector3[] targetPool =
		{
			new Vector3(0,0,0),
			new Vector3(1, 0, 0),
			new Vector3(-1, 0, 0),
			new Vector3(0, 0, 1),
			new Vector3(0, 0, -1),
			new Vector3(1, 0, 1),
			new Vector3(1, 0, -1),
			new Vector3(-1, 0, 1),
			new Vector3(-1, 0, -1),
		};

		for (int i = 0; i < targetPool.Length; i++)
		{
			targetPool[i] *= _targetRange;
		}

	}

	private void Launch()
	{
		Vector3 target = _bullseye.position;

		transform.LookAt(target);

		// after launch revert the switch
		_targetReady = false;
	}

	void Start () {

		transform.position = new Vector3 (152, 75, -355);
	}
	
	// Update is called once per frame
	void Update () {


		transform.Translate (direction * Time.deltaTime* playerSpeed);

		if(boolEvent){
			transform.Rotate(0,Time.deltaTime, 0, Space.World);
		}
		//SetEvent on a time
		//InvokeRepeating("landing", 1, 10F);
		if (Input.GetKeyDown(KeyCode.Space))
		{
			landing ();
		}
	}
		

	void landing(){
		AudioSource audio = GetComponent<AudioSource> ();
		Debug.Log (audio.name);
		playerSpeed = 10.0f;
		direction.Set (0, -1, 0);
		//new WaitForSeconds(1);
		Vector3 axis = new Vector3 (-1,0,0);
		int rot = 135;
		int iterations = 200;

		boolEvent = true;
		//transform.Rotate(axis * rot );
		//transform.Rotate(0,Time.deltaTime, 0, Space.World);
		for (int i = 0 ; i < rot; i++){
			//transform.Rotate(0,i, 0, Space.World);
			//transform.Rotate(axis * i );
			//new WaitForSeconds(3);
			//WaitForSeconds (2.0);

			//Vector3 targetDir = target.position - transform.position;
			//float step = playerSpeed * Time.deltaTime;
			//Vector3 newDir = Vector3.RotateTowards (transform.forward, targetDir, step, 0.0F);
			//transform.rotation = Quaternion.LookRotation (newDir);
		}

	}
}
