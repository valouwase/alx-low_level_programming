#include "main.h"
/**
 * string_toupper - function to convert to uppercase.
 * @str: parameter
 * Return: string
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr -= 32;
		}
		ptr++;
	}
	return (str);
}
