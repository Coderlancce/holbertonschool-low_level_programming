#include <stdio.h>
#include "main.h"

/**
 * print_line - name of the function
 * @n: value of ingrese
 * Return: none
 */

void print_line(int n)
{
	int c = 0;

	if (n > 0)
	{
		while (c < n)
		{
			_putchar ('_');
			c++;
		}
		_putchar ('\n');
	}
	else
		_putchar('\n');
}
