#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 *
*/
void print_alphabet(void)
{	
	char lowerCase;
	
	for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
	{
		printf("%c", lowerCase);
	}
	putchar('\n');

}
