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
	char *dest_ptr = dest;
	char *src_ptr = src;

	while (n-- > 0)
	{
		*dest_ptr = *src_ptr++;
	}
	return (dest);
}
