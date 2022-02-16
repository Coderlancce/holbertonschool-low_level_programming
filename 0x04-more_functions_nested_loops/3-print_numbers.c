#include <stdio.h>
#include "main.h"

/**
 * print_numbers - name of the function
 * for: cicle of print
 * Return: none
 */

void print_numbers(void)
{
	int cont;

	for (cont = 0; cont < 10; cont++)
		_putchar (cont + '0');

	_putchar ('\n');
}
