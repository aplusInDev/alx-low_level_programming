#include "lists.h"

/**
 * print_listint_safe - print a listint_t lsit safely
 * @head: listint_t root
 *
 * Return: listint_t length
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *curr, *tmp;
	size_t len = 0, j;

	curr = head;
	while (curr)
	{
		printf("[%p] %d\n", (void *)curr, curr->n);
		curr = curr->next;
		len++;
		j = 0;
		tmp = head;
		while (j < len)
		{
			if (tmp == curr)
			{
				printf("-> [%p] %d\n", (void *)curr, curr->n);
				return (len);
			}
			tmp = tmp->next;
			j++;
		}
		if (!head)
			exit(98);
	}
	return (len);
}
