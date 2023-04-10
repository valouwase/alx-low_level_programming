#include "main.h"
/**
 * print_binary - convert long int into binary
 * @n: the unsigned long int parameter
 */
void print_binary(unsigned long int n)
{
	unsigned int i;
	unsigned long int a;

	a = 1UL << (sizeof(unsigned long int) * 8 - 1);
	for (i = 0; i < sizeof(unsigned long int) * 8; i++)
	{
		printf("%c", (n & a) ? '1' : '0');
		a >>= 1;
	}
}
