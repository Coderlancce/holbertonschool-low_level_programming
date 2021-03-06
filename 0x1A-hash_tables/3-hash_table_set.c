#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: is the hash table you want to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value: is the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long index;
	hash_node_t *new, *current;
	const unsigned char *keyGet = (const unsigned char *)key;

	if (!ht || !(ht->array) || !key || !*key || !value)
		return (0);

	index = key_index(keyGet, ht->size);
	current = ht->array[index];
	while (current && strcmp(current->key, key) != 0)
		current = current->next;

	if (!current)
	{
		new = malloc(sizeof(hash_node_t));
		if (!new)
			return (0);

		new->key = strdup(key);
		new->value = strdup(value);
		if (!(new->value) || !(new->key))
			return (0);
		new->next = ht->array[index];
		ht->array[index] = new;
	}
	else
	{
		current->value = strdup(value);
		if (!(current->value))
			return (0);
	}
	return (1);
}
