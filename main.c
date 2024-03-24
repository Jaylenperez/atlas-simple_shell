#include "main.h"

int main(int ac, char **argv) // Main function with command-line arguments
{
    char *prompt = "(Eshell) $ "; // Define a prompt string to display to the user
    char *lineptr = NULL, *lineptr_copy = NULL; // Declare a pointer to a character array, Initializized to NULL & variable to hold copy of string to be passed to strtok
    size_t n = 0; // Store allocated size in bytes
    ssize_t nchars_read; // variable to store number of characters read by getline()
    const char *delim = " \n"; // variable to hold the delimiters which is an empty space and newline character

    (void)ac; (void)argv; // Declaring void variables

        while (1){ // Added a while loop to continue giving us eshell prompt
            printf("%s", prompt); // Print the prompt to the console
            nchars_read = getline(&lineptr, &n, stdin); // getting user input with getline and storing the number of chars read in the variable nchars_read
                if (nchars_read == -1){ // If getline function fails or user types CTRL + D
                    printf("Exiting shell....\n"); // Print the exit message
                    return (-1); // Return -1 and exit the program
                }
/*allocate space for a copy of the lineptr*/
    lineptr_copy = malloc(sizeof(char) *nchars_read);
if (lineptr_copy == NULL){
    perror("tsh: memory allocation error");

    return(-1);
}

    /*copy lineptr to lineptr_copy*/
    strcpy(lineptr_copy, lineptr);

    /* slit the string (lineptr) into an array of words*/
    /* calculate the total number of tokens*/
    token = strtok(lineptr, delim);

    while(token!= NULL)
    {
        num_tokens++;
        token = strtok(NULL, delim);
    }
    num_tokens++;

    /* allocae space to hold the array of strings */
     argv = malloc(sizeof(char *) * num_tokens);

     /* store each token in the argv array */
     token = strtok(lineptr_copy, delim);
     
    for(i = 0; token != NULL; i++)
    {
        argv[i] = malloc(sizeof(char) * strlen(token));
        strcpy(argv[i], token);
 
        token = strtok(NULL, delim); 
    }
    argv[i] = NULL;         
    
               printf("%s\n", lineptr); // Printing to make sure getline() worked

            free(lineptr); // Free the memory allocated for lineptr to prevent memory leaks
            lineptr = NULL; // Reset lineptr to NULL to avoid dangling pointer
        }

    return (0); // Return 0 to indicate successful execution of the program
}