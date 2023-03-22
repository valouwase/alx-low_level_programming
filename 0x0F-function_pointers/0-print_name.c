#include "function_pointers.h"
/**
 * print_name - function to print a name
 * @name: char parameter
 * @f: pointer to the function
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
