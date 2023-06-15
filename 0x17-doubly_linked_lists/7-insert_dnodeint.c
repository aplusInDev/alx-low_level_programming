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
	size_t len = dlistint_len(*h);
	int i;
	dlistint_t *curr, *new_node;

	if (len < idx)
		return (NULL);
	if (!idx)
		new_node = add_dnodeint(h, n);
	else if (idx == len)
		new_node = add_dnodeint_end(h, n);
	else
	{
		new_node = malloc(sizeof(dlistint_t));
		if (!new_node)
			return (NULL);
		for (curr = *h, i = 0; i < (int)idx; i++, curr = curr->next)
			;
		new_node->n = n;
		curr->prev->next = new_node;
		new_node->prev = curr->prev;
		new_node->next = curr;
		curr->prev = new_node;
	}
	return (new_node);
}

/**
 * dlistint_len - returns number of nodes
 * in giving dbly linked list
 * @h: head
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	dlistint_t *curr;

	for (curr = h; curr; curr = curr->next, len++)
		;
	return (len);
}
