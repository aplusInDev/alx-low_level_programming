#include "lists.h"

/**
 * add_node - adding new node to the beginning of list
 * @head: root of list
 * @str: passed string
 *
 * Return: new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = (list_t *) malloc(sizeof(list_t));

	if (!new)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(new->str);
	new->next = *head;
	(*head) = new;
	return (new);
}
