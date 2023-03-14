#include "main.h"
/**
 * str_concat - function to concatenate two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: result or Null.
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	size_t len1, len2;

	if (s1 == NULL) s1 = "";
	if (s2 == NULL) s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);
	result = malloc(len1 + len2 + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	strcpy(result, s1);
	strcpy(result + len1, s2);
	return (result);
}
