#include <lists.h>
/**
 * free_listint_safe - frees a list.
 * @h: pointer to the head.
 * Return: size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *curr, *next;
	curr = *h;
	next = NULL;
	size_t size = 0;

	while (curr != NULL)
	{
		size++;
		if (curr < curr->next || next == curr->next)
		{
			*h = NULL;
			break;
		}
		next = curr->next;
		curr->next = curr;
		curr = next;
	}
	while (*h != NULL)
	{
		curr = *h;
		*h = (*h)->next;
		free(curr);
		size--;
	}
	return (size);
}
