#include <stdio.h>
/**
 * _isupper - checks for uppercase.
 * @c: int parameter
 * Return: 1 or 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
