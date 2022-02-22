#include <stdio.h>
#include "main.h"

/**
 * _strlen - name of the function
 * @s: pointer of ingrese
 * Return: length of string
 */

int _strlen(char *s)
{
	int a;

	a = 0;
	while (*(s + a) != '\0')
	{
		a++;
	}
	return (a);
}
