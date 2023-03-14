#include "main.h"
/**
 * _strdup - function to return a pointer to a newly space.
 * @str: char parameter.
 * Return: NULL.
 */
char *_strdup(char *str)
{
	char *new_str;

	if (str == NULL)
	{
		return (NULL);
	}
	new_str = malloc(strlen(str) + 1);
	if (new_str == NULL)
	{
		return (NULL);
	}
	strcpy(new_str, str);
	return (new_str);
}
