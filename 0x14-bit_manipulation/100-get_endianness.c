#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: 1
 */
int get_endianness(void)
{
	unsigned int a;
	char *c;

	a = 1;
	c = (char *)&a;
	return (*c == 1);
}
