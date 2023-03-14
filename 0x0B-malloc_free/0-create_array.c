#include "main.h"
/**
 * create_array - function that creates array of chars.
 * @size: size of the string.
 * @c: char parameter.
 * Return: null.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (NULL);
}
