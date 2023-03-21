#include "main.h"
/**
 * array_range - function to print range btn max and min.
 * @min: first int parameter.
 * @max: second int parameter.
 * Return: address of the pointer or null
 */
int *array_range(int min, int max)
{
	int i, *arr;
	
	if (min > max)
	{
		return (NULL);
	}
	arr  = (int *) malloc((max - min + 1) * sizeof(int));
	if (!arr)
	{
		return (NULL);
	}
	for (i = 0; i <= max - min; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
