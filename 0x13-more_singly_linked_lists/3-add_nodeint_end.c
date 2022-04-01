#include "lists.h"

/**
 * add_nodeint_end - add nodeint to end of linked list
 * @head: doble pointer to pointer head
 * @n: data to inset in new node
 *
 * Return: pointer to node added in end list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (!*head)
		*head = new;
	else
	{
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
	return (*head);
}
