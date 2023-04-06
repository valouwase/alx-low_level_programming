#include "lists.h"
/**
 * sum_listint - finds sum of the list
 * @head: pointer to the head
 * Return: the sum
 */
int sum_listint(listint *head)
{
	listint_t *curr_node;
	int sum;

	*curr_node = head;
	sum = 0;
	while (curr_node != NULL)
	{
		sum += curr_node->n;
		curr_node = curr_node->next;
	}
	return (sum);
}
