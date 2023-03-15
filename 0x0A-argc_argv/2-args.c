#include <stdio.h>
/**
 * main - function to print all arguments.
 * @argc: int parameter.
 * @argv: array of string values.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
