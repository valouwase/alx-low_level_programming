#include "main.h"
/* function - that prints lowercase letters.
 *
 * Return: 0 always.
 */
void print_alphabet(void)
{
	char lowerCase;

        for(lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
	{
		printf("%c", lowerCase);
	}
        putchar('\n');
}
