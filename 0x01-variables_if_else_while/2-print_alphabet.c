#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char lower_letter;
	lower_letter = 'a';

	for ( ;lower_letter <= 'z'; lower_letter++)
		putchar(lower_letter);

	putchar('\n');

	return (0);
}
