#include "lists.h"

/**
 * dlistint_len - count the len of a doble linked list
 * @h: pointer to head of the doble linked list
 *
 * Return: number of elements at doble linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	if (!h)
		return (0);
	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
