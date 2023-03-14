#include "main.h"
/**
 * argstostr - function to cocatenated of all arguments.
 * @ac: int parameter.
 * @av: char parameter.
 * Return: null.
 */
char *argstostr(int ac, char **av)
{
	size_t length;
	int i, index;
	char *result;

	length = 0;
	index = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		length += strlen((av[i]) + 1);
	}
	result = malloc(length * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		strcpy(result + index, av[i]);
		index += strlen(av[i]);
		result[index++] = '\n';
	}
	return (result);
}
