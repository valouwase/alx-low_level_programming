#include "main.h"
/**
 * print_diagsums - function to print diagonals.
 * @a: a pointer.
 * @size: int parameter.
 */
void print_diagsums(int *a, int size)
{
	int i, j;

	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
	}
	for (i = 0, j = size - 1; i < size; i++, j--)
	{
		sum2 += *(a + i * size + j);
	}
	printf("%d, %d\n", sum1, sum2);
}
