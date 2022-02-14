#include <stdio.h>
#include "main.h"

/**
 * _isalpha - name of the function
 * @c: var int to function
 * Return: 1 if and 0 else
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);

	else
		return (0);
}
