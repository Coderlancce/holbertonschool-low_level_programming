#include "main.h"

/**
 * _print_rev_recursion - name of the function
 * @s: pointer to array
 * Return: reverse array of pointer s
 */

void _print_rev_recursion(char *s)
{
	if (!s || !*s)
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
