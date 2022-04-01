#include "lists.h"

/**
 * print_listint - print all elements of a linked list
 * @h: pointer head
 *
 * Return: number of nodes in linked list
 */

size_t print_listint(const listint_t *h)
{
	size_t nnodes = 0;

	for(; h; nmodes++)
	{
		printf("%d\n", h->i);
		h = h->next;
	}
	return (nnodes);
}
