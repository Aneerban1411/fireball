using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement; 

public class PlayerScore : MonoBehaviour
{   
    // Variables
    private  Text ScoreText;
    private int score = 0;

    void Awake()
    {
        ScoreText = GameObject.Find("ScoreText").GetComponent<Text>();
        ScoreText.text = "0";
    }

    void OnTriggerEnter2D(Collider2D target)
    {
        if(target.tag == "fireball") // If collision is with fireball.
        {
            transform.position = new Vector2(0, 100);
            target.gameObject.SetActive(false);
            StartCoroutine(RestartGame()); // Call function to restart the game.
        }
        if(target.tag == "coin") // If collision is with coin.
        {
            target.gameObject.SetActive(false);
            score++; // Increment score.
            ScoreText.text = score.ToString();
        }
    }

    IEnumerator RestartGame() // Restart game.
    {   yield return new WaitForSecondsRealtime(2f);
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }
}