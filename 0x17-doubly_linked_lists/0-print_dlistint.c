#include "lists.h"

/**
 * print_dlistint - print the data of the doblue linked list
 * @h: pointer to head of doble linked list
 *
 * Return: the number of elements printed
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	if(!h || !*h)
		return(NULL);
	for(i = 0; h != NULL; i++)
	{
		printf("%d", h->n);
		h = h->next;
	}
	return(i);
}
