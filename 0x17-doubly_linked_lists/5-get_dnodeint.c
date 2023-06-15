#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node
 * of giving dbly linked list
 * @head: dbly linked list root
 * @index: giving index
 * Return: the created node, or NULL if it fails
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
		return (NULL);
	for (i = 0; head->next && i < index; i++, head = head->next)
		;
	if (i == index)
		return (head);
	return (NULL);
}
