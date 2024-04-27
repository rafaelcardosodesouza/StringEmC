#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* Structure to hold a string */
typedef struct {
    char *string; // Pointer to the character array
} String;

/* Function to create a string */
String createString() {
    int initialSize = 10; // Define the initial size of the string for memory optimization
    char *string = (char *)malloc(initialSize * sizeof(char)); // Allocate initial memory for the string

    // Check if memory allocation was successful
    if (string == NULL) {
        printf("Error allocating memory.");
        exit(1); // Terminate the program if memory allocation fails
    }

    char character;
    int index = 0;

    // Loop to read characters until encountering a newline
    while ((character = getchar()) != '\n') {
        // Check if more memory needs to be reallocated for the string
        if (index >= initialSize - 1) {
            initialSize *= 2; // Double the size of the string to avoid frequent reallocations
            string = (char *)realloc(string, initialSize * sizeof(char)); // Reallocate memory for the string

            // Check if memory reallocation was successful
            if (string == NULL) {
                printf("Error reallocating memory.");
                exit(1); // Terminate the program if memory reallocation fails
            }
        }

        string[index] = character; // Store the character in the string
        index++;
    }

    string[index] = '\0'; // Add the null character at the end of the string to indicate its termination

    // Create a String structure to encapsulate the created string and return it
    String wrapper;
    wrapper.string = string; // Assign the created string to the String structure to encapsulate it
    return wrapper; // Return the String structure encapsulating the created string
}

// Procedure to convert a string to uppercase
String toUppercase(String text) {
    int i = 0;
    String temp;
    while (text.string[i] != '\0') {
        temp.string[i] = toupper(text.string[i]);
        i++;
    }
    temp.string[i] = '\0'; // Character indicating the end of the string
    return temp;
}

// Procedure to convert a string to lowercase
String toLowercase(String text) {
    int i = 0;
    String temp;

    while (text.string[i] != '\0') {
        temp.string[i] = tolower(text.string[i]);
        i++;
    }
    temp.string[i] = '\0'; // Character indicating the end of the string
    return temp;
}
