#include "main.h"
/**
 * swap_int - function that swaps two integers using pointers.
 * @a: int parameter.
 * @b: int parameter.
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
