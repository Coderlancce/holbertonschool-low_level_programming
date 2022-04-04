#include "main.h"

/**
 * print_binary - convert decimal in binary
 * @n: decimal number
 *
 * Return: when state in last digit return and
 * start to close function
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar('0' + (n & 1));
}
