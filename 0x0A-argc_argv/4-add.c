#include <stdio.h>
#include <stdlib.h>
/**
 * main - function to add to values.
 * @argc: int parameter.
 * @argv: char parameter.
 * Return: 0 or sum.
 */
int main(int argc, char *argv)
{
	int i, j, sum;
	char *arg;

	sum = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		arg = argv[i];
		for (j = 0; arg[j] != '\0'; j++)
		{
			if (!is_digit(arg[j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(arg);
	}
	printf("%d\n", sum);
	return (0);
}
