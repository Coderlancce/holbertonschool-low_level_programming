#include "main.h"

/**
 * _calloc - name of the function
 * @nmemb: size of bytes to modific
 * @size: size of datatype
 * Return: new value or in fail null
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(nmemb * size);

	if (!a)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		a[i] = 0;

	return (a);
}
