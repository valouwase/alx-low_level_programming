#include "main.h"

/**
 * _islower - checks for lowercase.
 * @c: int parameter.
 * Return: 1 when c is the lowercase or 0 otherwise.
 */
int _islower(int c)
{
	if(c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
