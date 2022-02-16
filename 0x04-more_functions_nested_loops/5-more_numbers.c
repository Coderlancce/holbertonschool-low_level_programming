#include <stdio.h>
#include "main.h"

/**
 * more_numbers - name of the function
 * Return: none
 */

void more_numbers(void)
{
	int cicle;
	int cont;

	for (cont = 0; cont < 10; cont++)
	{
		for (cicle = 0; cicle < 15; cicle++)
		{
			if (cicle >= 10)
			{
				_putchar ((cicle / 10) + '0');
			}
			_putchar ((cicle % 10) + '0');
		}
		_putchar ('\n');
	}
}
