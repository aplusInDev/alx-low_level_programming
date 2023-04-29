#include "lists.h"
#include "stdbool.h"

bool is_empty(listint_t *head);

/**
 * sum_listint - sums all listint data
 * @head: the list root
 *
 * Return: sum of all the data of a listint linked list
 */
int sum_listint(listint_t *head)
{
	listint_t *curr;
	int sum = 0;

	if (is_empty(head))
		return (0);
	curr = head;
	while (curr)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}
/**
 * is_empty - check if listint_t is empty
 * @head: the listint_t root
 *
 * Return: true if listint_t is empty
 */
bool is_empty(listint_t *head)
{
	return (!head ? true : false);
}
