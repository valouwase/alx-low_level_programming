#include "lists.h"
/**
 * free_listint - frees a list.
 * @head: pointer to the head.
 */
void free_listint(listint_t *head)
{
	listint_t *curr_node;

	while (head != NULL)
	{
		curr_node = head;
		head = head->next;
		free(curr_node);
	}
}
