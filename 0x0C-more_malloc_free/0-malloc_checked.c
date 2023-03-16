#include "main.h"
/**
 * malloc_checked - function to allocate memory.
 * @b: int parameter
 * Return: address or 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
