#include "lists.h"

/**
 * sum_dlistint - sums all data from giving
 * dbly linked list
 * @head: dbly linked list root
 * Return: the sum, or 0 if it fails
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *curr;

	if (head == NULL)
		return (0);
	curr = head;
	while (curr)
	{
		sum = sum + curr->n;
		curr = curr->next;
	}
	return (sum);
}
