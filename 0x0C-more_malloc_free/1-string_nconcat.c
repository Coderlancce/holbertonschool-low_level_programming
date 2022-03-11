#include "main.h"

/**
 * string_nconcat - name of the function
 * @s1: pointer to str1
 * @s2: pointer to str2
 * Return: concat strings
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int str1 = 0;
	unsigned int str2 = 0;
	unsigned int i;

	if (s1)
	{
		for (; s1[str1]; str1++)
			;
	}
	if (s2)
	{
		for (; s2[str2]; str2++)
			;
	}
	if (str2 > n)
		str2 = n;

	s = malloc(sizeof(char) * (str1 + str2 + 1));

	if (!s)
		return ('\0');

	for (i = 0; i < str1; i++)
		s[i] = s1[i];
	for (i = 0; i < str2; i++)
		s[str1 + i] = s2[i];

	s[str1 + str2] = '\0';
	return (s);
}
