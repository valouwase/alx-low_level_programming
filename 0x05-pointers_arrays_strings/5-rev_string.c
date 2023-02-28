#include "main.h"
#include "2-strlen.c"
/**
 * rev_string - function to reverse a string.
 * @s: char parameter.
 *
 */
void rev_string(char *s)
{
	int len, i, j, temp;

	len = _strlen(s);
	i = 0;
	for (j = len - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
