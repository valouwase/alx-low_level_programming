#include "main.h"
#include "2-strchr.c"
/**
 * _strpbrk - function to search a string.
 * @s: char parameter.
 * @accept: pointer to char.
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		if (_strchr(accept, *s) != NULL)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
