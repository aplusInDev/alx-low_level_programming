#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: giving hash table to update
 * @key: giving key
 * @value: giving value
 * 
 * Return: 11 (success)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int idx = 0;
	char *value_cp = NULL;
	hash_node_t *new = NULL;
	hash_node_t *head = NULL;

	if (!ht || !key || *key == '\0' || !value)
		return (0);
	value_cp = strdup(value);
	if (!value_cp)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	if (ht->array[idx] && !strcmp(ht->array[idx]->key, key))
	{
		free(ht->array[idx]->value);
		ht->array[idx]->value = value_cp;
		return (1);
	}
	for (head = ht->array[idx]; head; head = head->next)
	{
		if (!strcmp(head->key, key))
		{
			free(head->value);
			head->value = value_cp;
			return (1);
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = strdup(key);
	if (!new->key)
		return (0);
	new->value = value_cp;
	new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}
