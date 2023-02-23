#include "main.h"
/**
 * more_numbers - prints numbers from 0 to 14
 *                to 10 times.
 * Return: numbers.
 */
void more_numbers(void)
{
	for (int j = 0; j < 10; j++)
	{
		for (int i = 0; i < 15; i++)
		{
			printf("%d", i);
		}
		printf("\n");
	}
}
