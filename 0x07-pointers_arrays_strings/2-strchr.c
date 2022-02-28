#include "main.h"

/**
 * _strchr - name of the function
 * @s: pointer to string
 * @c: character to compare in s
 * Return: when have a equal caracter return the location of this
 */

char *_strchr(char *s, char c)
{
	unsigned int a = 0;

	for (; *(s + a) != '\0'; a++)
	{
		if (*(s + a) == c)
			return (s + a);
	}
	if (*(s + a) == c)
		return (s + a);

	return ('\0');
}
