#include "hash_tables.h"

/**
 * key_index - function gives your index of a key
 * @key: is the key of data
 * @size: the size of the array of the hash table
 *
 * Return: the index at stored the value in the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (!key || !*key || size == 0)
		return (0);

	return (hash_djb2(key) % size);
}
