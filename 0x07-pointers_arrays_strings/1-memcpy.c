#include "main.h"
/**
 * _memcpy - function to copy memory area.
 * @dest: destination memory area.
 * @src: source pointer.
 * @n: int parameter.
 * Return: Always 0.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *dest_ptr = dest;
	char *src_ptr = src;

	for (i = 0; i < n; i++)
	{
		dest_ptr[i] = src_ptr[i];
	}
	return (dest_ptr);
}
