#include "main.h"
/**
 * *_getenv - Function that returns a pointer to a string in envp
 * @name: key to find in envp
 * Return: pointer to the value matched with key
 */

char *_getenv(const char *name)
{
	extern char **environ;
	char **env;
	size_t name_len;
	name_len = strlen(name);

	for (env = environ; *env != NULL; env++)
	{
		if (strncmp(*env, name, name_len) == 0 && (*env)[name_len] == '=')
		{
			return (*env + name_len + 1);
		}
	}
	return (NULL);
}
