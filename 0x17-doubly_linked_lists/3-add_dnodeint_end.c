#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * of giving dbly linked list
 * @head: list root
 * @n: node content
 * Return: created node if it success or NULL if
 * it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *curr, *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->next = NULL;
	new_node->n = n;
	if (!(*head))
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		for (curr = *head; curr->next; curr = curr->next)
			;
		new_node->prev = curr;
		curr->next = new_node;
	}
	return (new_node);
}
