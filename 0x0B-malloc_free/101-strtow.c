#include "main.h"
/**
 * strtow - function to split a string into words.
 * @str: char parameter.
 * Return: string
 */
char **strtow(char *str)
{
	int word_count;
	int i, index, j, k;
	char *token;
	char **words;

	index = 0;
	word_count = 0;
	j = 0;
	if (str == NULL || strlen(str) == 0)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' &&(i == 0 || str[i - 1] == ' '))
			word_count++;
	}
	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}
	token = strtok(str, "");
	while (token != NULL)
	{
		words[index] = malloc((strlen(token) + 1) * sizeof(char));
		if (words[index] == NULL)
		{
			for (i = 0; i < index; i++)
			{
				free(words[i]);
			}
			free(words);
			return (NULL);
		}
		for (k = 0; str[j] != ' ' && str[j] != '\0'; k++)
		{
			words[index][k] = str[j];
			j++;
		}
		words[index][k] = '\0';
	}
	words[index] = NULL;
	return (words);
}
