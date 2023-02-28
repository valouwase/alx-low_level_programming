#include "main.h"
#include "2-strlen.c"
/**
 * print_rev - function to reverse a string.
 * @s: char parameter.
 *
 */
void print_rev(char *s)
{
	int i, len;

	len = _stren(s);
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
