#include "main.h"
/**
 * wildcmp - function that compares two strings.
 * @s1: char parameter.
 * @s2: char parameter.
 * Return: Always 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
	{
		return (*s1 == '\0');
	}
	else if (*s2 == '*')
	{
		while (*s1 != '\0')
		{
			if (wildcmp(s1, s2 + 1))
			{
				return (1);
			}
			s1++;
		}
		return (wildcmp(s1, s2 + 1));
	}
	else
	{
		if (*s1 == *s2)
		{
			return (wildcmp(s1 + 1, s2 + 1));
		}
		else
		{
			return (0);
		}
	}
}
