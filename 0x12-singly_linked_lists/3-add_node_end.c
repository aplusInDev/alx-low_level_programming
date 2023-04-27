#include "lists.h"

/**
 * add_node_end - adding new node to the end of list
 * @head: root of list
 * @str: passed string
 *
 * Return: new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = (list_t *) malloc(sizeof(list_t));
	list_t *curr;

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(new->str);
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		curr = *head;
		while (curr->next != NULL)
			curr = curr->next;
		curr->next = new;
	}
	return (new);
}
