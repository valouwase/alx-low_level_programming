#include "lists.h"
/**
 * free_listint2 - frees a list.
 * @head: pointer to the head.
 */
void free_listint2(listint_t **head)
{
	listint_t *curr_node;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		curr_node = *head;
		*head = (*head)->next;
		free(curr_node);
	}
	*head = NULL;
}
