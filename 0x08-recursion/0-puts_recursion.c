#include "main.h"

/**
 * _puts_recursion - name of the function
 * @s: array of strings of ingrese
 * Return: printer text in pointer s
 */

void _puts_recursion(char *s)
{
	if (!s || !*s)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
