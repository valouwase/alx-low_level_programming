include "main.h"
/**
 * flip_bits - function to flip
 * @n: int parameter
 * @m: int parameter
 * Return: returns number of bit differences
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	unsigned int count;

	diff = n ^ m;
	count = 0;
	while (diff != 0)
	{
		count++;
		diff &= (diff - 1);
	}
	return count;

}
