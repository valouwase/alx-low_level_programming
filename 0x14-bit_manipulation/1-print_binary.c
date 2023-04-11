#include "main.h"
/**
 * print_binary - convert long int into binary
 * @n: the unsigned long int parameter
 */
void print_binary(unsigned long int n)
{
	int i, temp;
	unsigned long int a;

	temp = 0;

	if (n == 0)
	{
		printf("0");
		return;
	}
	for (i = 15; i >= 0; i--)
	{
		a = (1 << i);
		if (n & a)
		{
			temp++;
			printf("1");
		}
		else
		{
			if (temp)
			{
				printf("0");
			}
		}
	}
}
