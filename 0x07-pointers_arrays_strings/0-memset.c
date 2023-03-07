#include "main.h"
/**
 * _memset - function that deals with pointers.
 * @s: pointer.
 * @b: cahr parameter.
 * @n: int parameter.
 * Return: Always On success 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n-- > 0)
	{
		*ptr++ = b;
	}
	return (s);
}
