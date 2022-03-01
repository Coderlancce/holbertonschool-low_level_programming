#include "main.h"

/**
 * _strstr - name of the function
 * @haystack: pointer to compare
 * @needle: pointer to compare
 * Return: compare equal if this are true
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j, x;

	while (*(haystack + i) != '\0')
	{
		x = i;
		j = 0;

		while (*(needle + j) == *(haystack + i) && *(haystack + i) != '\0')
		{
			i++;
			j++;
		}
		if (*(needle + j) == '\0')
		{
			return (haystack + x);
		}
		i = x + 1;
	}
	return (0);
}
