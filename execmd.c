#include "main.h"

extern char **environ;

/**
 * exec_env - Prints the environment of the environment variable array
 * 
 * This function prints the environment variables present in the environment variable array.
 */
void exec_env(void)
{
	char **current;
	for (current = environ; *current != 0; current++)
	{
		printf("%s\n", *current);
	}
}

/**
 * exec_command - Executes a command
 * @argv: Argument vector
 * @actual_command: Actual command to execute
 * @mallocd: Flag indicating if actual_command was dynamically allocated
 * 
 * This function executes a command with the given arguments.
 */
void exec_command(char **argv, char *actual_command, int mallocd)
{
	pid_t pid;
	int status;

	pid = fork();
	if (pid < 0)
	{
		perror("Error forking");
		return;
	} else if (pid == 0)
	{
		if (execve(actual_command, argv, environ) == -1)
		{
			perror("Error executing command");
			exit(EXIT_FAILURE);
		}
	} else
	{
		waitpid(pid, &status, 0);
		if (mallocd == 1)
			free(actual_command);
	}
}

/**
 * execmd - Executes a command with arguments
 * argv: Argument vector
 * 
 * This function executes a command with the given arguments.
 */
void execmd(char **argv)
{
	char *command = NULL, *actual_command = NULL;
	int mallocd = 0, not_mallocd = 0;

	if (argv)
	{
		command = argv[0];

		if (strcmp(command, "exit") == 0)
		{
			free(argv);
			free(command);
			exit(EXIT_SUCCESS);
		}
		else if (strcmp(command, "env") == 0)
		{
			exec_env();
			return;
		}

		actual_command = get_location(command);

		if (actual_command == NULL)
		{
			actual_command = command;
			not_mallocd = 1;
		}
		else if (actual_command && not_mallocd == 0)
			mallocd = 1;

		exec_command(argv, actual_command, mallocd);
	}
}
