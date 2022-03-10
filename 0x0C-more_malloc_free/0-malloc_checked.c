#include "main.h"

/**
 * malloc_checked - name of the program
 * @b: value of the pointer
 * Return: pointer with malloc space reserved
 */

void *malloc_checked(unsigned int b)
{
	void *v;

	v = malloc(b);

	if (v == NULL)
		exit(98);

	return (v);
}
