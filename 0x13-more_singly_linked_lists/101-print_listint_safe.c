#include "lists.h"
#include <stdlib.h>
/**
 * print_listint_safe - prints a list.
 * @head: pointer to the head.
 * Return: the number of nodes.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *curr_node, *prev;
	size_t count;

	curr_node = head;
	prev = NULL;
	count = 0;
	while (curr_node != NULL)
	{
		printf("[%p] %d\n", (void *) curr_node, curr_node->n);
		count++;
		if (curr_node < prev)
			break;
		prev = curr_node;
		curr_node = curr_node->next;
	}
	if (curr_node != NULL)
	{
		printf("-> [%p] %d\n", (void *) curr_node, curr_node->n);
		exit(98);
	}
	return (count);
}
