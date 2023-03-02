#include "main.h"
/**
 * _strncpy - function to copy strings.
 * @dest: a destination string.
 * @src: a source string.
 * @n: int parameter.
 * Return: a string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n; j++)
		dest[j] = src[j];
	return (dest);
}
