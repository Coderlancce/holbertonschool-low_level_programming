#include <stdio.h>
#include "main.h"

/**
 * _islower - name of the function
 * if: conditional for print
 * Return: 1 if and 0 else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
