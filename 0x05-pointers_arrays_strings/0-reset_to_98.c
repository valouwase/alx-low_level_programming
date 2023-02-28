#include "main.h"
#include <stdio.h>

/**
 * main - function that takes a pointer to an int as parameter
 *        and updates the value it points to to 98.
 *
 * Return: Always 0.
 */
int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *p;

	printf("%s\n", s1);
	printf("%s", s2);
	p = _strcat(s1, s2);
	printf("%s", s1);
	printf("%s", s2);
	printf("%s", p);
	return (0);
}
