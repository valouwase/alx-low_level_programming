#include "lists.h"
/**
 * listint_len - prints the length of elements inside the list.
 * @h: pointer to the head of the list.
 * Return: the length of elements inside the list
 */
size_t listint_len(const listint_t *h)
{
	size_t len;

	len = 0;
	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
