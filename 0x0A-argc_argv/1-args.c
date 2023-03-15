#include <stdio.h>
/**
 * main - function to print argc.
 * @argc: number of string values.
 * @argv: array of string values.
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
