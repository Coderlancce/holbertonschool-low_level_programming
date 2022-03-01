#include "main.h"

/**
 * _strstr - name of the function
 * @haystack: pointer to compare
 * @needle: pointer to compare
 * Return: compare equal if this are true
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j;

	while (*(haystack + i))
	{
		j = 0;

		while (*(needle + j) == *(haystack + i) && *(haystack + i) != '\0')
			j++;

		if (*(needle + j) == '\0')
			return (haystack + i);

	      i++
	}
	return ('\0');
}
