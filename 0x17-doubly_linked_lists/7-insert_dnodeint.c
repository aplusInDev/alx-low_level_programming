#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at index
 * @h: dbly linked list root
 * @idx: giving index
 * @n: node content
 * Return: created node, or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *next, *curr;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	if (idx != 0)
	{
		curr = *h;
		for (i = 0; i < idx - 1 && curr != NULL; i++)
			curr = curr->next;
		if (curr == NULL)
			return (NULL);
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		next = *h;
		*h = new_node;
		new_node->prev = NULL;
	}
	else
	{
		new_node->prev = curr;
		next = curr->next;
		curr->next = new_node;
	}
	new_node->next = next;
	if (new_node->next != NULL)
		new_node->next->prev = new_node;
	return (new_node);
}
