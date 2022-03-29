#include "lists.h"

/**
 * list_len - function count elemnents in the linked list
 * @h: pointer header to linked list
 *
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	for(; h; count++)
		h = h->next;

	return (count);
}
