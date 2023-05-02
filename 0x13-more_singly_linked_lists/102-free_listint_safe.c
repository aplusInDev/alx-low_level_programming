#include "lists.h"

/**
 * free_listint_safe - frees a list
 * @h: list root
 *
 * Return: listint_t length
 */
size_t free_listint_safe(listint_t **h)
{
	int i = 0;
	listint_t *tmp;

	if (!*h)
		return (0);
	while (*h)
	{
		if (*h <= (*h)->next)
		{
			tmp = *h;
			free(tmp);
			i++;
			break;
		}
		tmp = *h;
		*h = (*h)->next;
		free(tmp);
		i++;
	}
	*h = NULL;
	return (i);
}
