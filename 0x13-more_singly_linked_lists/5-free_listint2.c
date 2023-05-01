#include "lists.h"
/**
 * free_listint2 - frees a list
 * @head: list root
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next;

	if (*head == NULL || !head)
		return;
	while (current != NULL)
	{
		next = curr;
		curr = curr->next;
		free(next);
	}

	*head = NULL;
}
