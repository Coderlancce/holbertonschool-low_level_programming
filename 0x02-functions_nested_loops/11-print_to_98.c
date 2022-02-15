#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - name of the function
 * while: cicle of print
 * @n: value of ingrese
 * Return: none
 */

void print_to_98(int n)
{
	int d = n;

	while (d < 98)
	{
		printf("%d, ", d);
		d++;
	}
	while (d > 98)
	{
		printf("%d, ", d);
		d--;
	}
	if (d == 98)
		printf("%d\n", d);
}
