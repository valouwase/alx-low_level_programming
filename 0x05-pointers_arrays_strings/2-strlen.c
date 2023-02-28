#include "main.h"
/**
 * _strlen - function to dislay the length of a string.
 * @s: char parameter
 * Return: length of the string.
 */
int _strlen(char *s)
{
	int len;
	
	len = 0;
	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
