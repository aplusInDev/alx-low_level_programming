#include "hash_tables.h"

/**
 * hash_table_print - prints giving hash table
 * @ht: giving hash table
 * 
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	int i, flag;
	hash_node_t *root;

	if (!ht)
		return;
	printf("{");
	for (i = 0, flag = 0; i < (int)ht->size; i++)
	{
		if (flag && ht->array[i])
			printf(", ");
		for (root = ht->array[i]; root; root = root->next)
		{
			printf("'%s': '%s'", root->key, root->value);
			if (root->next)
				printf(", ");
			flag = 1;
		}
	}
	printf("}\n");
}
