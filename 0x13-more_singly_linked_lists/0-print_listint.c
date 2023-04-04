#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all the elements of the list.
 * @h: pointer to the head of the list.
 * Return: the number of the nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
