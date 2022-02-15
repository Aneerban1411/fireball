using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FaceMovements : MonoBehaviour
{
    private Rigidbody2D face;
    private float speed = 10f;

    void Start()
    {
        face = GetComponent<Rigidbody2D>();
    }

    void FixedUpdate()
    {
        Vector2 vel = face.velocity;
        vel.x = Input.GetAxis("Horizontal") * speed;
        face.velocity = vel;
    }
}

