#include "main.h"
/**
 * is_palindrome - function to check a palindrome string.
 * @s: char parameter.
 * Return: 1 if palindrome otherwise 0.
 */
int is_palindrome(char *s)
{
	int i, len;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	for (i = 0; i < len / 2; i++)
	{
		if (s[i] != s[len - i - 1])
		{
			return (0);
		}
	}
	return (1);
}
