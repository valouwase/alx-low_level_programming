#include "main.h"
/**
 * factorial - function prints factorial number.
 * @n: int parameter.
 * Return: 1 or -1.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
