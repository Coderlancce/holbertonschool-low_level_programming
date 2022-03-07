#include "main.h"

/**
 * _strdup - name of the function
 * @str: store of string required
 * Return: Duplicate string str in s
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int i;
	unsigned int j;

	if (str == NULL || s == NULL)
		return (0);

	while (str[i])
		i++;

	i++;
	s = malloc(sizeof(char) * i);

	for (j = 0; j < i; j++)
		s[j] = str[j];

	return (s);
}
