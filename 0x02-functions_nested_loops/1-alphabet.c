#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - name of the function
 * for: cicle of print alphabet
 * Return: Always 0
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <='z'; alphabet++)
		_putchar(alphabet);

	_putchar('\n');
}
