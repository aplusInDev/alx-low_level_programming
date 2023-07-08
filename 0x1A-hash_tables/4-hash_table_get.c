#include "hash_tables.h"

/**
 * hash_table_get -  returns value associated with a giving key
 * @ht: giving hash table
 * @key: giving key
 * 
 * Return: value associated with the element (success), or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int idx;
	hash_node_t *root;

	if (!ht || !key || *key == '\0')
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	if (ht->array[idx] && !strcmp(ht->array[idx]->key, key))
		return (ht->array[idx]->value);
	for (root = ht->array[idx]; root; root = root->next)
	{
		if (!strcmp(root->key, key))
			return (root->value);
	}
	return (NULL);
}
