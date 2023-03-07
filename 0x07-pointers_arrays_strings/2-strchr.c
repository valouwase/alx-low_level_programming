#include "main.h"
/**
 * _strchr - function to locate a character.
 * @s: pointer parameter.
 * @c: char parameter.
 * Return: NULL if char not found.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
