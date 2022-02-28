#include "main.h"

/**
 * _strstr - name of the function
 * @haystack: pointer to compare
 * @needle: pointer to compare
 * Return: compare equal if this are true
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (*(haystack + i))
	{
	  if ( *(needle) == *(haystack + i) && *(haystack + i) && *(needle + j))
		{
			while (*(needle + j) == *(haystack + i))
			{
				return (haystack + i);
				j++;
			}
		}
	i++;
	}
	return ('\0');
}
