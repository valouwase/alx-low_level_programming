#include "main.h"
#include "2-strchr.c"
/**
 * _strspn - function to get the length.
 * @s: string pointer.
 * @accept: string pointer.
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	while (*s != '\0' && strchr(accept, *s) != NULL)
	{
		len++;
		s++;
	}
	return (len);
}
