#include "lists.h"

/**
 * add_nodeint - add new node at the beginning linked list
 * @head: doble pointer head to pointer head
 * @n: data to insert
 *
 * Return: adress of the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
