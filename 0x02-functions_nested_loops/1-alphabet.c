#include "main.h"
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
                printf("%c",lowerCase);
        }
        putchar('\n');

}
