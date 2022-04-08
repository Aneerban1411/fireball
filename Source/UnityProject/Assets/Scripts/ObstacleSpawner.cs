using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/*
* Script for spawning of 3D falling objects
*/

public class ObstacleSpawner : MonoBehaviour
{
    [SerializeField]
    private GameObject[] obj;
    private BoxCollider coldr;
    float x1, x2; // Bounds of the screen.

    // Function to initialize variables.
    void Awake() 
    {
        coldr = GetComponent<BoxCollider>();

        x1 = transform.position.x - coldr.bounds.size.x / 2f;
        x2 = transform.position.x + coldr.bounds.size.x / 2f;
    }

    // Called on the frame when the script is enabled.
    void Start()
    {
        StartCoroutine(SpawnObject(1f)); 
    }

    // Function to spawn randomly
    IEnumerator SpawnObject(float time)
    {
        yield return new WaitForSecondsRealtime(time); // For now in level 1, the time of spawning is taken as input.

        Vector3 temp = transform.position;
        temp.x = Random.Range(x1, x2); // Randomly select boundary between the bounds.
        Instantiate(obj[Random.Range(0, obj.Length)], temp, Quaternion.identity); // The objects to be spwaned can be customized.
        StartCoroutine(SpawnObject(Random.Range(1f, 2f))); // To loop this code.
    }
}