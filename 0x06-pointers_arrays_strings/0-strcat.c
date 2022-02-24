#include <stdio.h>
#include "main.h"

/**
 *_strcat - name of the function
 * @dest: pointer to array
 * @src: pointer to array
 * Return: none
 */

char *_strcat(char *dest, char *src)
{
	int a = 0, b = 0, c = 0;

	while (dest[a] != '\0')
		a++;

	while (src[b] != '\0')
		b++;

	while (c <= b)
	{
		dest[a] = src[c];
		a++;
		c++;
	}
	return (dest);
}
