#include "lists.h"
/**
 * insert_node_int_at_index - insert node at index.
 * @head: pointer
 * @idx: index of the inserted node.
 * n: int parameter.
 * Return: NULL or pointer of the new node.
 */
listint_t *insert_node_int_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_n, *curr_node, *prev;
	unsigned int j;

	if (head == NULL)
	{
		return (NULL);
	}
	new_n = malloc(sizeof(listint_t));
	if (new_n == NULL)
	{
		return (NULL);
		new_n->n =n;
	}
	if (idx == 0)
	{
		new_n->next = *head;
		*head = new_n;
		return (new_n);
	}
	prev = NULL;
	curr_node = *head;
	for (j = 0; j < idx - 1 && curr_node != NULL; j++)
	{
		prev = curr_node;
		curr_node = curr_node->next;
	}
	if (j < idx)
	{
		free(new_n);
		return (NULL);
	}
	new_n->next = curr_node->next;
	prev->next = new_n;
	return (new_n);
}
