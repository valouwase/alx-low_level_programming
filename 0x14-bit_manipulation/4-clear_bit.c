#include "main.h"
/**
 * clear_bit - clears the bit at index.
 * @n: int parameter.
 * @index: index of the long int.
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n &= ~(1UL << index);
	return (1);
}
