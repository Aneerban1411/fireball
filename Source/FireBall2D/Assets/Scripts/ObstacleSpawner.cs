using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObstacleSpawner : MonoBehaviour
{
    [SerializeField]
    private GameObject[] obj;
    private BoxCollider2D coldr;
    float x1, x2;
    
    void Awake() 
    {
        coldr = GetComponent<BoxCollider2D>();

        x1 = transform.position.x - coldr.bounds.size.x / 2f;
        x2 = transform.position.x + coldr.bounds.size.x / 2f;
    }

    // Update is called once per frame
    void Start()
    {
        StartCoroutine(SpawnObject(1f));
    }

    IEnumerator SpawnObject(float time)
    {
        yield return new WaitForSecondsRealtime(time);

        Vector3 temp = transform.position;
        temp.x = Random.Range(x1, x2);
        Instantiate(obj[Random.Range(0, obj.Length)], temp, Quaternion.identity);
        StartCoroutine(SpawnObject(Random.Range(1f, 2f)));
    }
}
