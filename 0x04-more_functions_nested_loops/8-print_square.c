#include <stdio.h>
#include "main.h"

/**
 * print_square - name of the function
 * @size: value of ingrese
 * Return: none
 */

void print_square(int size)
{
	int a = 0;
	int b = 0;

	if (size > 0)
	{
		while (a < size)
		{
			while (b < size)
			{
				_putchar('#');
				b++;
			}
			a++;
			b = 0;
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
