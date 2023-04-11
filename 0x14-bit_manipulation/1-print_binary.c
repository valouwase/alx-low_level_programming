#include "main.h"
/**
 * print_binary - convert long int into binary
 * @n: the unsigned long int parameter
 */
void print_binary(unsigned long int n)
{
	int i;
	unsigned long int a;

	for (i = 15; i >= 0; i--)
	{
		a = (1 << i);
		if (n & a)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
}
