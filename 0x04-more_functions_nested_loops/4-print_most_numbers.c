#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - name of the function
 * Return: none
 */

void print_most_numbers(void)
{
	int cicle;

	for (cicle = 0; cicle < 10; cicle++)
	{
		if (cicle != 4 && cicle != 2)
		_putchar (cicle + '0');
	}
	putchar ('\n');
}
