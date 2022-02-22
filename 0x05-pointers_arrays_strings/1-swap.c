#include <stdio.h>
#include "main.h"

/**
 * swap_int - name of the function
 * @a: value of ingrese
 * @b: value of ingrese
 * Return: none
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
