#include "hash_tables.h"

/**
 * key_index - giving index for a key
 * @key: giving key
 * @size: giving size
 *
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
