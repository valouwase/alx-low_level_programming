#include "lists.h"
/**
 * find_listint_loop - finds loop in the list.
 * @head: pointer
 * Return: pointer or NULL.
 */
list_t *find_listint_loop(listint_t *head)
{
	listint_t *tort, *hare;

	tort = head;
	hare = head;
	while (hare != NULL && hare->next != NULL)
	{
		tort = tort->next;
		hare = hare->next->next;
		if (tort == hare)
		{
			tort = head;
			while (tort != hare)
			{
				tort = tort->next;
				hare = hare->next;
			}
			return (tort);
		}
	}
	return (NULL);
}
