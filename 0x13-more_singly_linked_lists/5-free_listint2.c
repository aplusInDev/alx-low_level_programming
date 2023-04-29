#include "lists.h"
/**
 * free_listint2 - frees a list
 * @head: list root
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *curr = *head;
	(void)tmp;

	while (curr)
	{
		tmp = curr->next;
		free(curr);
		curr = tmp;
	}
	*head = NULL;
}
