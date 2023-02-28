#include "main.h"
/**
 * _puts - function that prints a string.
 * @str: str as parameter.
 * Return: new line.
 */
void _puts(char *str)
{
	int i = 0;
	
	while (str[i] != '\0')
	{
		_puts(str[i]);
		i++;
	}
	putchar('\n');
}
