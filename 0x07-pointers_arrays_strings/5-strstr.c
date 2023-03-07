#include "main.h"
/**
 * _strstr - function to locate a substring.
 * @haystack: pointer parameter.
 * @needle: pointer parameter.
 * Return: Null
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *haystack_ptr = haystack;
		char *needle_ptr = needle;

		while (*needle_ptr != '\0' && *needle_ptr == *haystack_ptr)
		{
			needle_ptr++;
			haystack_ptr++;
		}
		if (*needle_ptr == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
