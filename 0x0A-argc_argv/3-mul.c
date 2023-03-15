#include <stdio.h>
#include <stdlib.h>
/**
 * main - function to multiply 2 numbers.
 * @argc: number of strings.
 * @argv: array of string values.
 * Return: 0 or 1.
 */
int main(int argc, char *argv[])
{
	int a, b, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;
	printf("%d\n", result);
	return (0);
}
