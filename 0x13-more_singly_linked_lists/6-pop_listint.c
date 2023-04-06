#include "lists.h"
/**
 * pop_listint - deletes the head node and returns its data
 * @head: pointer to the head.
 * Return: the data.
 */
int pop_listint(listint_t **head)
{
	listint_t *curr_node;
	int data;

	if (*hard == NULL)
	{
		return (0);
	}
	curr_node = *head;
	data = curr_node->;
	*head = curr_node->next;
	free(curr_node);
	return (data);
}
