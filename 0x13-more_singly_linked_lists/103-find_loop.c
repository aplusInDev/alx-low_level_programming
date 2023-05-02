#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: listint_t root
 *
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *curr, *tmp;
	size_t len = 0, j;

	curr = head;
	while (curr)
	{
		curr = curr->next;
		len++;
		j = 0;
		tmp = head;
		while (j < len)
		{
			if (tmp == curr)
			{
				return (tmp);
			}
			tmp = tmp->next;
			j++;
		}
	}
	return (NULL);
}
