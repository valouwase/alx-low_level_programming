#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function to print sum of all integers.
 * @n: const keyword
 * Return: 0 or sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum, value;
	unsigned int i;

	va_start(args, n);
	sum = 0;
	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		value = va_arg(args, int);
		sum += value;
	}
	va_end(args);
	return (sum);
}
