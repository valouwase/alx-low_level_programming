#include "function_pointers.h"
/**
 * int_index - function to take other parameters.
 * @array: an array
 * @size: size of the array
 * @cmp: int pointer
 * Return: 1, -1 or 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	
	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
