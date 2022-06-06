#include "hash_tables.h"

/**
 * hash_table_get - function that retrives a value associated with the key
 * @ht: is the hash table you want yo look into
 * @key: its the key are looking for
 *
 * Return: the value associated with the element
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long index;
	const unsigned char *keyGet;
	hash_node_t *current;

	if (!ht || !key || !*key)
		return (NULL);

	keyGet = (const unsigned char *)key;
	index = key_index(keyGet, ht->size);

	current = ht->array[index];
	while (current && strcmp(current->key, key) != 0)
		current = current->next;

	return ((current) ? current->value : NULL);
}
