#include "main.h"

int main(int ac, char **argv) // Main function with command-line arguments
{
    char *prompt = "(Eshell) $ "; // Define a prompt string to display to the user
    char *lineptr; // Declare a pointer to a character array, which will hold the input line
    size_t n = 0; // Store allocated size in bytes

    printf("%s, prompt"); // Print the prompt to the console
    getline(&lineptr, &n, stdin); // Read a line from the standard input (stdin) into lineptr, dynamically allocating memory as needed

    free(lineptr); // Free the memory allocated for lineptr to prevent memory leaks
    return (0); // Return 0 to indicate successful execution of the program
}