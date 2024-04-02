#include "main.h"

/**
 * _strdup - Duplicate a string.
 * @str: The string to duplicate.
 *
 * Description: _strdup creates a new string in memory which is a duplicate
 * of the string passed as parameter.
 * 
 * Return: A pointer to the duplicated string, or NULL if memory alloc fails.
 */
char *_strdup(const char *str)
{
	size_t len = strlen(str) + 1;
	char *dup = malloc(len);

	if (dup != NULL)
	{
		char *ptr = dup;
		while (*str != '\0')
		{
			*ptr++ = *str++;
		}
		*ptr = '\0';
	}
	return (dup);
}
