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
	char *a;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	i = 0, j = 0;

	while (*(s1 + i))
		i++;

	while (*(s1 + j))
		j++;

	a = malloc(sizeof(char) + (i + j));

	if (!a)
		return (0);

	for (k = 0; k < i; k++)
		*(a + k) = *(s1 + k);

	for (k = 0, l = i; k < j; l++, k++)
		*(a + l) = *(s2 + l);

	*(a + l) = '\0';
	return (a);
}
