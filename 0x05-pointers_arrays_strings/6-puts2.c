#include "main.h"
#include "2-strlen.c"
/**
 * puts2 - function to print the character of a string.
 * @str: char parameter.
 */
void puts2(char *str)
{
	int i, len;

	len = _strlen(str);

	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');

}
