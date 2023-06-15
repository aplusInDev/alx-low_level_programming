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

	for (; head != NULL; sum += head->n)
		head = head->next;
	return (sum);
}
