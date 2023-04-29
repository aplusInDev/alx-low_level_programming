#include "lists.h"
/**
 * add_nodeint_end - adding node at end of list
 * @head: the root of list
 * @n: the new node value
 *
 * Return: new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *til = (listint_t *) malloc(sizeof(listint_t));
	listint_t *curr = *head;

	if (!til)
		return (NULL);
	til->n = n;
	til->next = NULL;
	if (!*head)
		*head = til;
	else
	{
		while (curr->next != NULL)
			curr = curr->next;
		curr->next = til;
	}
	return (til);
}
