#include "main.h"
/**
 * _print_rev_recursion - function to print reverse string
 * @s: char parameter.
 * Return: nothing.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	putchar(*s);
}
