#include "lists.h"
/**
 * add_nodeint - adding node the the beginning of list
 * @head: the root of list
 * @n: the new node value
 *
 * Return: new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *root = (listint_t *) malloc(sizeof(listint_t));

	if (!root)
		return (NULL);
	root->n = n;
	root->next = *head;
	*head = root;
	return (root);
}
