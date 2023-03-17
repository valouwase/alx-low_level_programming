#include "main.h"
/**
 * _calloc - function to allocate an array.
 * @nmemb: int parameter.
 * @size: int parameter.
 * Return: address or null.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		((char *)ptr)[i] = 0;
	}
	return (ptr);
}
