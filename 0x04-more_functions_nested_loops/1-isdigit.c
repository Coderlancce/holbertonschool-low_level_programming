#include <stdio.h>

/**
 * _isdigit - name of the function
 * @c: value of ingrese
 * Return: 0 if is a number, 1 if is otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (0);

	else
		return (1);
}
