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

	while (str[i])
		i++;

	i++;
	s = malloc(sizeof(char) * i);

	if (str == NULL || s == NULL)
		return (0);
	
	for (j = 0; j < i; j++)
		s[j] = str[j];

	return (s);
}
