#include <stdio.h>
#include "main.h"

/**
 * _isdigit - name of the function
 * @c: value of ingrese
 * Return: 0 if is a number, 1 if is otherwise
 */

int _isdigit(int c)
{
	return (c >= 48 && c <= 57 ? 1 : 0);
}
