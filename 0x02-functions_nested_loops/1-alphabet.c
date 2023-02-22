#include <stdio.h>
/** main -  prints the alphabet, in lowercase, followed by a new line.
 *
 * return: Always 0
 *
 */
#include "main.h"

void print_alphabet()
{
	char lowerCase;

	for(lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
	{
		putchar(lowerCase);
	}
	putchar('\n');

}
int main(void)
{
	print_alphabet();

	return 0;
}
