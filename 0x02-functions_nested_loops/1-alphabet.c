#include <stdio.h>
/** main -  prints the alphabet, in lowercase, followed by a new line.
 *
 * return: Always 0
 *
 */

void palphabet(void)
{
        char lowerCase;

        for(lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
        {
                printf("%c",lowerCase);
        }
        putchar('\n');

}
int main(void)
{
        palphabet();

        return 0;
}


