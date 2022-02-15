#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - name of the function
 * Return: last digit
 */

int print_last_digit(int r)
{
	_putchar(_abs(r % 10) + '0');
	return(_abs(r % 10));
}

/**
 * _abs - name of the function
 * Return: positive number
 */

int _abs(int n)
{
	return ((n < 0) ? -n : n);
}
