using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;

/*
* Script for swapping face when button is pressed.
* Uses The ARFaceManager and the materials
*/

public class FaceSwap : MonoBehaviour
{
    private ARFaceManager faceManager;
    public List<Material> faceMaterials;
    private int faceMaterialIndex = 0;

    // Called on the frame when a script is enabled.
    void Start()
    {
        faceManager = GetComponent<ARFaceManager>();
    }

    // Switch face material for all faces to next material in the list of materals.
    public void SwitchFaceMaterial()
    {
        foreach(ARFace face in faceManager.trackables)
        {
            face.GetComponent<MeshRenderer>().material = faceMaterials[faceMaterialIndex];
        }
        faceMaterialIndex++;
        // If at the end of list, go back to first element.
        if(faceMaterialIndex == faceMaterials.Count)
        {
            faceMaterialIndex = 0;
        }
    }
}



