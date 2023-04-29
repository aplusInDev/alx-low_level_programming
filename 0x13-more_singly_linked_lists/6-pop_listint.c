#include "lists.h"
#include <stdbool.h>

bool is_empty(listint_t *head);

/**
 * pop_listint - frees a list
 * @head: list root
 *
 * Return: value of removed node
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (is_empty(*head))
		return (0);
	n = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	return (n);
}
/**
 * is_empty - check if listint is empty
 * @head: the root of list
 *
 * Return: true if list is empty
 */
bool is_empty(listint_t *head)
{
	return (head ? false : true);
}
