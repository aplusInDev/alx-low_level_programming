#include "lists.h"
/**
 * delete_nodeint_at_index - delete node at a given position
 * @head: the list root
 * @index: given position
 *
 * Return: 1 (success)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr, *prev, *tmp;
	unsigned int i = 0;

	if (!(*head))
		return (-1);
	curr = *head;
	while (curr && i < index)
	{
		i++;
		prev = curr;
		curr = curr->next;
	}
	if (curr && i == index)
	{
		if (!i)
		{
			tmp = *head;
			*head = (*head)->next;
			free(tmp);
		}
		else
		{
			prev->next = curr->next;
			free(curr);
		}
		return (1);
	}
	return (-1);
}
