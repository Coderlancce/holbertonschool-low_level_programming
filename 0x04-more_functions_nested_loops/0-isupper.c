#include <stdio.h>
#include "main.h"

/**
 * _isupper - name of the function 
 * @c: value of ingrese
 * Return: 1 if true and 0 is false
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);

	else
		return (0);
}
