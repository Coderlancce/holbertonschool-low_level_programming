#include <stdio.h>
#include "main.h"

/**
 * reverse_array - name of the function
 * @a: pointer to array
 * @n: large of array
 * Return: none
 */

void reverse_array(int *a, int n)
{
	int i = 0, save;

	n--;

	while (i <= n)
	{
		save = a[i];
		a[i++] = a[n];
		a[n--] = save;
	}
}
