#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - function that takes a pointer to an int as parameter
 *        and updates the value it points to to 98.
 * @n: int parameter
 * Return: Always 0.
 */
void reset_to_98(int *n)
{
	*n = 98;
	int num = 0;
	int *n = &num;

	printf("n=%d\n", num);
	reset_to_98(n);
	printf("n=%d\n", num);
}
