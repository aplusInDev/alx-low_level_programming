#include "lists.h"

/**
 * print_dlistint -  prints all data from
 * giving doubly linked list
 * @h: dbly linked list root
 * Return: number of counted nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;
	dlistint_t *curr = h;

	while (curr)
	{
		printf("%d\n", h->n), len++;
		curr = curr->next;
	}

	return (len);
}
