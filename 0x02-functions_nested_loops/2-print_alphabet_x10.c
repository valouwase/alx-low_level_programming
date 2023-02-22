#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *                       in lowercase, followed by a new line.
 *
 */
void print_alphabet_x10(void)
{
	char lowerCase;
	int count = 0;

	while (count < 10)
	{
		for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
		{
			_putchar(lowerCase);
		}
		_putchar('\n');
		count++;
	}
}
