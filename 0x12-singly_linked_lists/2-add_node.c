#include "lists.h"

/**
 * _strlen - length of string to insert
 * @str: pointer to strin
 *
 * Return: length of string
 */

int _strlen(const char *str)
{
	int count = 0;

	for(; str[count]; count++)
		;
	return (count);
}


/**
 * add_node - pointer to function for add node
 * @head: pointer to pointer head
 * @str: pointer to string insert to linked list
 *
 * Return: added argument to linked list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	if (!head && !str)
		return (NULL);

	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);

	node->str = strdup(str);
	if (!node->str)
	{
		free(node);
		return (NULL);
	}
	node->len = _strlen(str);
	node->next = *head;
	*head = node;
	return (node);
}
