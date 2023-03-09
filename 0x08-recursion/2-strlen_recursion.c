#include "main.h"
/**
 * _strlen_recursion - function to print the length
 * @s: char parameter.
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
