#include <stdio.h>
#include "main.h"

/**
 * print_sign - name of the function
 * if_and_else: conditional for print
 * Return: -1, 1 or 0
 */

int print_sign(int n)
{
	int mas = 43;
	int menos = 45;
  
	if (n < 0)
	{
		_putchar(menos);
		return (-1);
	}
	else if (n > 0)
	{
		_putchar(mas);
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
