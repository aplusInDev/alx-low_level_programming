#include "lists.h"

listint_t *create_node(int n);

/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 * @head: the listint_t root
 * @idx: given position
 * @n: node value
 *
 * Return: new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *curr, *prev, *new;
	unsigned int i = 0;

	if (!(*head) || !head)
		return (NULL);
	curr = *head;
	prev = *head;
	while (curr && i < idx)
	{
		i++;
		prev = curr;
		curr = curr->next;
	}
	if (i == idx)
	{
		new = create_node(n);
		if (!new)
			return (NULL);
		if (!curr)
		{
			prev->next = new;
			curr = new;
		}
		else if (!idx)
		{
			new->next = *head;
			*head = new;
		}
		else
		{
			prev->next = new;
			new->next = curr;
		}
		return (new);
	}
	return (NULL);
}
/**
 * create_node - create new node
 * @n: new node value
 *
 * Return: created node
 */
listint_t *create_node(int n)
{
	listint_t *new = (listint_t *) malloc(sizeof(listint_t));

	if (!new)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	return (new);
}
