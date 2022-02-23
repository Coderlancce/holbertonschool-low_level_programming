#include <stdio.h>
#include "main.h"

/**
 * puts_half - name of the function
 * @str: pointer of ingrese
 * Return: none
 */

void puts_half(char *str)
{
	int a = 0, b;

	while (str[a] != '\0')
		a++;

	if (a % 2 == 1)
	{
		for (b = (a + 1) / 2; str[b] != '\0'; b++)
			_putchar(str[b]);
	}
	else
	{
		for (b = (a / 2); str[b] != '\0'; b++)
			_putchar(str[b]);
	}
	_putchar('\n');
}
