#include<stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - assign a random number to a variablle
 *        states whether the number is positive
 *        negative or zero.
 *
 * Return: always 0.
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
		printf("%d is zero\n", n);
	else if (n > 0)
		printf("%d is positive\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}
