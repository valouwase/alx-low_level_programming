#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse.
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	letter = 'z';

	for ( ; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}

