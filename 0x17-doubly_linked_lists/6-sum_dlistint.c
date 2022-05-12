#include "lists.h"

/**
 * sum_dlistint - sum all elements of the double linked list
 * @head: pointer to head at doble linked list
 *
 * Return: the sum of the all elements
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
