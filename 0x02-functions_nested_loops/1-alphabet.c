#include <stdio.h>
/** main -  prints the alphabet, in lowercase, followed by a new line.
 *
 * return: Always 0
 *
 */
void print_alphabet(void)
{
	char lowerCase;

	for(lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
	{
		putchar(lowerCase);
	}
	putchar("\n");

}
