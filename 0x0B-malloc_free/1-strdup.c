#include "main.h"

/**
 * _strdup - name of the function
 * @str: store of string required
 * Return: Duplicate string str in s
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int i = 0;
	unsigned int j;

	if (str == NULL)
		return (0);

	while (str[i])
		i++;

	i++;
	s = malloc(sizeof(char) * i);

	if (s == NULL)
		return (0);
	
	for (j = 0; j < i; j++)
		s[j] = str[j];

	return (s);
}
