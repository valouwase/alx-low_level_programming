#include "main.h"
/**
 * _puts - function that prints a string.
 * @str: str as parameter.
 * Return: new line.
 */
void _puts(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	putchar('\n');
}
