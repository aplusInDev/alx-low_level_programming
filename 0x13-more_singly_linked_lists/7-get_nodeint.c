#include "lists.h"
/**
 * get_nodeint_at_index - return the nth node of list
 * @head: the list root
 * @index: node index
 *
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *curr;
	unsigned int i = 0;

	if (!head)
		return (NULL);
	curr = head;
	while (curr && i < index)
	{
		i++;
		curr = curr->next;
	}
	if (curr && i == index)
		return (curr);
	return (NULL);
}
