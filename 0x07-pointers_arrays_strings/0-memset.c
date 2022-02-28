#include <stdio.h>
#include "main.h"

/**
 * _memset - name of the function
 * @s: pointer have the value
 * @b: constant to print
 * @n: number of repeat b
 * Return: new value of s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		*(s + a) = b;

	return (s);
}
