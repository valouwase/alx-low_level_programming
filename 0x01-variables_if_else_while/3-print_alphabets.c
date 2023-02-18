#include <stdio.h>

/**
 * main - Display alphabets in lowercase, and then in uppercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char lower_letter;

	lower_letter = 'a';

	char upper_letter;

	upper_letter = 'A';

	for ( ; lower_letter <= 'z'; lower_letter++)
		putchar(lower_letter);

	for ( ; upper_letter <= 'Z'; upper_letter++)
		putchar(upper_letter);

	putchar('\n');

	return (0);
}
