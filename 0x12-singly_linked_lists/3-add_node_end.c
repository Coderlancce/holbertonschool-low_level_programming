#include "lists.h"

/**
 * _strlen - count the length of the string and return this
 * @str: string
 *
 * Return: length of string
 */

int _strlen(const char *str)
{
	int count = 0;

	for (; str[count]; count++)
		;

	return (count);
}

/**
 * add_node_end - add a node in the end of the linked list
 * @head: pointer to pointer start name head
 * @str: string to insert
 *
 * Return: pointer head to last position
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;
	temp = *head;

	if (!temp)
		*head = new;
	else
	{
		for (;temp->next;)
			temp = temp->next;
		temp->next = new;
	}

	return (*head);
}
