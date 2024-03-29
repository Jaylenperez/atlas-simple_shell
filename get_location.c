#include "main.h"

char *get_location(char *command)
{
	char *path, *path_copy, *path_token, *file_path;
	int command_length, directory_length;
	struct stat buffer;

	path = getenv("PATH");

	if (path)
	{
		/* duplicates the path string -> remember to free up the memory */
		path_copy = strdup(path);
		/* get the length of the command that was passed */
		command_length = strlen(command);

		/* breaks down the path variable and gets the directories */
		path_token = strtok(path_copy, ":");

		while (path_token != NULL)
		{
			/* gets the length of the directory */
			directory_length = strlen(path_token);
			/*allocates memory for storing the command name with the length */
			file_path = malloc(command_length + directory_length + 2);
			/* to build the path for the command */
			strcpy(file_path, path_token);
			strcat(file_path, "/");
			strcat(file_path, command);
			strcat(file_path, "\0");

			/* we are testing if this file path actually works */
			if (stat(file_path, &buffer) == 0)
			{
				/* the return value of 0 means success */

				/* let's free up allocated memory before returning file_path */
				free(path_copy);

				return (file_path);
			}
			else
			{
				/*free up the file+path memory */
				free(file_path);
				path_token = strtok(NULL, ":");

			}
		}

		/* if file_path doesn't exist for the command */
		free(path_copy);

		/* before we exit without luck, let's test it */
		if (stat(command, &buffer) == 0)
		{
			return (command);   
		}
		
		return (NULL);
	}

	return (NULL);
}
