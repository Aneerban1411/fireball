using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FaceBounds : MonoBehaviour
{
    private float minX, maxX;

    void Start()
    {
        Vector3 coord = Camera.main.ScreenToWorldPoint(new Vector3(Screen.width, Screen.height, 0));
        minX = -coord.x + 0.9f;
        maxX = coord.x - 0.9f;
    }

    // Update is called once per frame
    void Update()
    {
        Vector3  curr = transform.position;
        if(curr.x > maxX)
            curr.x = maxX;

        if(curr.x < minX)
            curr.x = minX;

        transform.position = curr;
    }
}
