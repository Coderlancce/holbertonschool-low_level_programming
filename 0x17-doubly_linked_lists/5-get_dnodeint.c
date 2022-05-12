#include "lists.h"

/**
 * get_dnodeint_at_index - returns one node of a doble linked list
 * @head: pointer to head of doble linked list
 * @index: position to serch in the list
 *
 * Return: node of index position
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i != index; i++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
