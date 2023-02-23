#include "main.h"
/**
 *  print_most_numbers - print numbers from
 *                       without 2 and 4.
 *  Return: new line or a number.
 */
void print_most_numbers(void)
{
	char a;

	for (a = '0'; a  <= '9'; a++)
	{
		if ((a == '2') || (a == '4'))
			a++;
		_putchar(a);
	}
	_putchar('\n');
}
