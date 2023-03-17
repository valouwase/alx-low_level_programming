#include "main.h"
/**
 * string_nconcat - function to concatenate two strings
 * @s1: the first string
 * @s2: the second string
 * @n: int parameter.
 * Return: null or pointer.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int s1_len = 0;
	unsigned int s2_len = 0;

	if (s1)
	{
		while (s1[s1_len])
			++s1_len;
	}

	if (s2)
	{
		while (s2_len < n && s2[s2_len])
			++s2_len;
	}

	ptr = malloc(sizeof(char) * s1_len + s2_len + 1);
	if (ptr == NULL)
		return (NULL);

	for (n = 0; n < s1_len; ++n, ++ptr)
		*ptr = s1[n];

	for (n = 0; n < s2_len; ++n, ++ptr)
		*ptr = s2[n];

	*ptr = '\0';

	return (ptr - s1_len - s2_len);
}
