#include <stdio.h>
/**
 * _isdigit - checks if a number.
 * @c: int parameter.
 * Return: 1 or 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
