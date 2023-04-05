#include "lists.h"
/**
 * add_nodeint - add a new node to the beginning of the list.
 * @head: pointer to the first node.
 * @n: arguments of a node
 * Return: the new node added.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
