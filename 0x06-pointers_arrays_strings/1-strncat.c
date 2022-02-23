#include <stdio.h>
#include "main.h"

/**
 * _strncat - name of function
 * @dest: pointer of array
 * @src: pointer of array
 * @n: value of ingrese for print
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0, c = 0;

	while (dest[a] != '\0')
		a++;

	while (src[b] != '\0')
		b++;
	while (c <= b )
	{
		if (n > 0)
		{
			dest[a] = src[c];
			a++;
			c++;
			n--;
		}
		else
			break;
	}
	return(dest);
}
