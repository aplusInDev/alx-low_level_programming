#include "lists.h"
/**
 * print_listint - print list node content
 * @h: list node
 *
 * Return: the length of list
 */
size_t print_listint(const listint_t *h)
{
	size_t l = 0;

	while (h)
	{
		printf("%d\n", h->n);
		l++;
		h = h->next;
	}
	return (l);
}
