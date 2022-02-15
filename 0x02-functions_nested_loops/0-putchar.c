#include <stdio.h>

/**
 * _putcchar - name of the fuction
 * Return: 0
 */

int _putchar(void)
{
	char c[] = "_putchar";
	int i = 0;

	while (c[i] != '\0')
		_putchar(c[i++]);

	_putchar('\n');
	return (0);
}
