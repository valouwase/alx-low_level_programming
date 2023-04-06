#include "lists.h"
/**
 * get_nodeint_at_index: returns the nth node of a list.
 * @head: pointer to the head.
 * @index: index of the returned node
 * Return: a pointer to the nth node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *curr_node;
	unsigned int i;

	curr_node = head;
	for (i = 0; curr_node != NULL && i < index; i++)
	{
		curr_node = curr_node->next;
	}
	return (curr_node);
}
