#include "lists.h"
/**
 * free_listint2 - frees a list
 * @head: list root
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	(void)tmp;

	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	*head = NULL;
}
