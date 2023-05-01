#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: the listint_t root
 *
 * Return: new root
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp, *root;

<<<<<<< HEAD
	/*root = (listint_t *) malloc(sizeof(listint_t));*/
=======
>>>>>>> fab315987a9dbeba97323a41ded08a846e83ae71
	root = NULL;
	if (!(*head))
		return (NULL);
	while (*head)
	{
		tmp = *head;
		*head = (*head)->next;
		tmp->next = root;
		root = tmp;
	}
	*head = root;
	return (*head);
}
