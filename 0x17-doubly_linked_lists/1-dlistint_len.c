#include "lists.h"

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
