#include "lists.h"

/**
 * print_list - function to print elements of the linked list
 * @h: pointer header to linked list
 *
 * Return: information in linked list
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	for (; h; count++)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");

		h = h->next;
	}
	return (count);
}
