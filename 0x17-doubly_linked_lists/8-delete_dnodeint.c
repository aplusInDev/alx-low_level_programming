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

/**
 * delete_dnodeint_at_index - deletes node at giving index
 * @head: dbly linked list root
 * @index: giving index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	size_t len = dlistint_len(*head);
	int i;
	dlistint_t *curr;

	if (!(*head) || len < index)
		return (-1);
	curr = *head;
	if (len == 0 && index == 0)
	{
		*head = NULL;
	}
	else if (!index)
	{
		(*head)->next->prev = NULL;
		(*head) = (*head)->next;
	}
	else if (index == len)
	{
		for (curr = *head; temp->next; curr = curr->next)
			;
		curr->prev->next = NULL;
	}
	else
	{
		for (curr = *head, i = 0; i < (int)index; i++, curr = curr->next)
			;
		curr->prev->next = curr->next;
		curr->next->prev = curr->prev;
	}
	free(temp);
	return (1);
}

/**
 * dlistint_len - returns number of nodes
 * in giving dbly linked list
 * @h: head
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	dlistint_t *curr;

	for (curr = h; curr; curr = curr->next, len++)
		;
	return (len);
}
