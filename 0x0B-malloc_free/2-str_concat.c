#include "main.h"

/**
 * str_concat - name of the function
 * @s1: pointer to fist array
 * @s2: pointer to second array
 * Return: 0 if all pointers empty or new concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, l;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	i = 0, j = 0;

	while (*(s1 + i))
		i++;

	while (*(s1 + j))
		j++;

	s = malloc(sizeof(char) + (i + j));

	if (s < 1)
		return (0);

	for (k = 0; k < i; k++)
		*(s + k) = *(s1 + k);

	for (l = 0; l < j; l++)
		*(s + l) = *(s2 + l);

	*(c + l) = '\0';
	return (c);
}
