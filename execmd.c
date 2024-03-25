#include "main.h"

void execmd(char **argv)
{
    char *command = NULL; // Declare a pointer to a character (string) and initialize it to NULL

    if (argv) // Check if the argv pointer is not NULL
    {
        /* Get the command */
        command = argv[0]; // Assign the first element of argv (command name) to the command pointer

        /* Execute the command with execve */
        if (execve(command, argv, NULL) == -1) // Attempt to execute the command using execve. If execve returns -1, it indicates an error
        {
            perror("Error:"); // Print an error message to stderr, prefixed with "Error:"
        }
    }
}