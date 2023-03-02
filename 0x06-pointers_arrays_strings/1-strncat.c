#include "main.h"
/**
 * _strncat - function to concatenate two strings.
 * @dest: string
 * @src: string
 * @n: int parameter
 * Return: a string returned.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int src_len = 0;
	int j;

	for (j = 0; dest[j] != '\0'; j++)
		dest_len++;
	for (j = 0; src[j] != '\0'; j++)
		src_len++;
	for (j = 0; j < n; j++)
		dest[dest_len + j] = src[j];
	dest[dest_len + j] = '\0';
	return (dest);

}
