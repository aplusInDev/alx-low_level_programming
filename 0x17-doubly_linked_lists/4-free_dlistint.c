#include "lists.h"

/**
 * free_dlistint - frees a giving dbly linked list
 * @head: list root
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
