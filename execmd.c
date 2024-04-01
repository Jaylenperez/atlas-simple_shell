#include "main.h"

extern char **environ;

void exec_exit(void)
{
	/* printf("Exiting shell....\n"); */
	exit(EXIT_SUCCESS);
}

void exec_env(void)
{
	char **current;
	for (current = environ; *current != 0; current++)
	{
		printf("%s\n", *current);
	}
}

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
		if (mallocd == 0)
			free(actual_command);
	}
}

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
			exec_exit();
		} else if (strcmp(command, "env") == 0)
		{
			exec_env();
			return;
		}

		actual_command = get_location(command);

		if (actual_command == NULL)
		{
			actual_command = command;
			not_mallocd = 1;
			/* fprintf(stderr, "Error: command not found: %s\n", command); */
			/* return; */
		}
		else if (actual_command && not_mallocd == 0)
			mallocd = 1;

		exec_command(argv, actual_command, mallocd);
	}
}