#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * of giving dbly linked list
 * @head: dbly linked list root
 * @n: node content
 * Return: new node (success). NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if ((new_node = malloc(sizeof(dlistint_t))) == NULL)
		return (NULL);
	new_node->prev = NULL;
	new_node->n = n;
	if (!(*head))
		new_node->next = NULL;
	else
	{
		new_node->next = *head;
		(*head)->prev = new_node;
	}
	*head = new_node;
	return (new_node);
}
