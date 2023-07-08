#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: size of giving array
 * 
 * Return: created hash table or NULL (fail)
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;

	new = malloc(sizeof(hash_table_t));
	if (!new)
		return (NULL);
	new->size = size;
	new->array = malloc(sizeof(hash_node_t *) * size);
	if (!new->array)
		return (NULL);
	return (new);
}
