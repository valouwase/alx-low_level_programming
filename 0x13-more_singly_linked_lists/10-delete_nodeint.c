#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node.
 * @head: pointer to pointer to head.
 * @index: index of the node to be deleted.
 * Return: 1 or -1.
 */
int delete_nodeint_at_index(listint **head, unsigned int index)
{
	listint_t *prev, *del_n;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		del_n = *head;
		*head = (*head)->next;
		free(del_n);
		return (1);
	}
	prev = *head;
	while (index > 1 && prev != NULL)
	{
		prev = prev->next;
		index--;
	}
	if (prev == NULL || prev->next == NULL)
	{
		return (-1);
	}
	del_n = prev->next;
	prev->next = del_n->next;
	free(del_n);
	return (1);

}
