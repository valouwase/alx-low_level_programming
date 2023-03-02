#include "main.h"
/**
 * _strcat - function to concatenate two strings.
 * @dest: first array.
 * @src: second array.
 * Return: one string.
 */
char *_strcat(char *dest, char *src)
{
	int i, j, dest_len, src_len;

	dest_len = 0;
	src_len = 0;
	j = 0;
	for (i = 0; dest_len[i] != '\0'; i++)
		dest_len[i] += 1;
	for (i = 0; src_len[i] != '\0'; i++)
		src_len[i] += 1;
	while (j <= src_len)
		j++;
		dest_len[dest_len + j] = src_len[j];
	return (dest);
}
