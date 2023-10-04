using UnityEngine;

public class CharacterMovement : MonoBehaviour
{
    public float movementSpeed = 10.0f;

    void Update()
    {
        // Get input from arrow keys or WASD
        float moveHorizontal = Input.GetAxis("Horizontal");
        float moveVertical = Input.GetAxis("Vertical");

        // Calculate movement direction
        Vector3 movement = new Vector3(moveHorizontal, 0.5f, moveVertical);
        movement = transform.TransformDirection(movement);

        // Apply movement
        transform.Translate(movement * movementSpeed * Time.deltaTime, Space.World);
    }
}
