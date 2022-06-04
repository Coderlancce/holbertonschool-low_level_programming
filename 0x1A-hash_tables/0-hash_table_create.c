#include "hash_tables.h"

/**
 *
 *
 *
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hasht;
	hash_node_t **buffer;

	hasht = malloc(sizeof(hash_table_t));
	if (!hasht)
		return (NULL);

	buffer = calloc(size, sizeof(hash_node_t *));
	if (!buffer)
	{
		free (hasht);
		return (NULL);
	}

	hasht->size = size;
	hasht->array = buffer;

	return (hasht);
}
