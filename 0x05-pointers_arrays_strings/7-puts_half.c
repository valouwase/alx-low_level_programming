#include "main.h"
#include "2-strlen.c"
/**
 * puts_half - function to print half of a string.
 * @str: function parameter.
 * Return: a string.
 */
void puts_half(char *str)
{
	int i, len;

	len = _strlen(str);
	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
			_putchar(str[i]);
		_putchar('\n');
	}
	else if (len % 2 != 0)
	{
		for (i = (len - 1) / 2; str[i] != '\0'; i++)
			_putchar(str[i]);
		_putchar('\n');
	}
}
