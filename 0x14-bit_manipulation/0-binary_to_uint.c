#include "main.h"
/**
 * binary_to_uint - changes binary to int
 * @b: char parameter
 * Return: the converted uint
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res;
	int i;

	res = 0;
	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
			res = res * 2;
		else if (b[i] == '1')
			res = res * 2 + 1;
		else
			return (0);
	}
	return (res);
}
