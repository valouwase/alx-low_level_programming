#include "main.h"
/**
 * set_bit - function takes a pointer to an u
 * @n: int parameter.
 * @index: index of the int
 * Return: 1 0r -1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n |= (1UL << index);
	return (1);
}
