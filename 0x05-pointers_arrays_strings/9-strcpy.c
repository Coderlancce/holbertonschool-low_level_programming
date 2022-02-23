#include <stdio.h>
#include "main.h"

/**
 * _strcpy - name of the function
 * @dest: array
 * @src: number of array
 * Return: none
 */

char *_strcpy(char *dest, char *src)
{
	int z;

	for (z = 0; src[z]; z++)
		dest[z] = src[z];

	dest[z] = src[z];
	return (dest);
}
