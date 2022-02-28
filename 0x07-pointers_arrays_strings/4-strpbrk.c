#include "main.h"

/**
 * _strpbrk - name of the function
 * @s: pointer to string
 * @accept: pointer to string
 * Return: search equal and send
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int a, b;

	for (a = 0; *(s + a) != '\0'; a++)
	{
		for (b = 0; *(accept + b) != '\0'; b++)
		{
			if (*(s + a) == *(accept + b))
				return (s + a);
		}
	}
	return ('\0');
}
