#include "lists.h"

/**
 * free_list - frees a list
 * @head: root of list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
