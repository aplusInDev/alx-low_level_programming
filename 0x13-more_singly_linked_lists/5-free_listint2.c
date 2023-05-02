#include "lists.h"
/**
 * free_listint2 - frees a list
 * @head: list root
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *curr = *head;
	listint_t *next;

	if (!head)
		return;
	while (curr != NULL)
	{
		next = curr->next;
		free(curr);
		curr = next;
	}
	*head = NULL;
}
