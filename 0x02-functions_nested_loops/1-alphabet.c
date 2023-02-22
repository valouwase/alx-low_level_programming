#include "main.h"

void print_alphabet(void)
{
	char lowerCase;

        for(lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
	{
		printf("%c",lowerCase);
	}
        putchar('\n');
}
