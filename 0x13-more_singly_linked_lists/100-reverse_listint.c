#include "lists.h"
/**
 * reverse_listint - reverse the list
 * @head: pointer to pointer to the head.
 * Return: returnes the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next_n;

	prev = NULL;
	while (*head != NULL)
	{
		next_n = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next_n;
	}
	*head = prev;
	return (*head);
}
