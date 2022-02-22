#include <stdio.h>
#include "main.h"

/**
 * print_rev - name of the function
 * @s: pointer to ingrese
 * Return: none
 */

void print_rev(char *s)
{
	int a = 0;

	while (s[a] != '\0')
		a++;

	a--;

	while (a >= 0)
	{
		_putchar(s[a]);
		a--;
	}
	_putchar('\n');
}
