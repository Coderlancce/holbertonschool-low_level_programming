#include <stdio.h>
#include "main.h"

/**
 * print_number - name of the function
 * if: conditional print
 * @n: value of ingrese
 * Return: none
 */

void print_number(int n)
{
	if (n / 1000 != 0)
	{
		_putchar((n / 1000) + '0');
		_putchar(((n / 100) % 10) + '0');
		_putchar(((n / 10) % 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n < 0)
	{
		_putchar('-');
		_putchar(((-n / 10) % 10) + '0');
		_putchar((-n % 10) + '0');
	}
	else if (n / 100 != 0)
	{
		_putchar(((n / 100) % 10) + '0');
		_putchar(((n / 10) % 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n / 10 != 0)
	{
		_putchar(((n / 10) % 10) + '0');
		_putchar((n % 10) + '0');
	}
	else
		_putchar((n % 10) + '0');
}
