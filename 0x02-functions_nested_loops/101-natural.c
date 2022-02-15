#include <stdio.h>
#include "main.h"

/**
 * main - name of the function
 * Return: always 0
 */

int main(void)
{
	int num, sum;

	sum = 0;

	for (num = 0; num < 1024; num++)
	{
		if (num % 3 == 0 || num % 5 == 0)
		sum += num;
	}
	_putchar((sum / 100000) + '0');
	_putchar(((sum / 10000) % 10) + '0');
	_putchar(((sum / 1000) % 10) + '0');
	_putchar(((sum / 100) % 10) + '0');
	_putchar(((sum / 10) % 10) + '0');
	_putchar((sum % 10) + '0');
	return (0);
}
