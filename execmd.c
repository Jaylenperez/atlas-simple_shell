#include "main.h"

void execmd(char **argv)
{
    char *command = NULL, *actual_command = NULL;
    pid_t pid;
    int status;

    if (argv)
    {
        command = argv[0];

        if (strcmp(command, "exit") == 0)
        {
            printf("Exiting shell....\n");
            exit(EXIT_SUCCESS);
        }
        
        actual_command = get_location(command);

        if (actual_command == NULL)
        {
            fprintf(stderr, "Error: command not found: %s\n", command);
            return;
        }

        pid = fork();
        if (pid < 0)
        {
            perror("Error forking");
            return;
        }
        else if (pid == 0)
        {
            if (execve(actual_command, argv, NULL) == -1)
            {
                perror("Error executing command");
                exit(EXIT_FAILURE);
            }   
        }
        else
        {
            waitpid(pid, &status, 0);
        }
    }
}