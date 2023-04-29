#include "lists.h"
/**
 * listint_len - calculate the length of list
 * @h: list node
 *
 * Return: list length
 */
size_t listint_len(const listint_t *h)
{
	size_t l = 0;

	while (h)
	{
		l++;
		h = h->next;
	}
	return (l);
}
