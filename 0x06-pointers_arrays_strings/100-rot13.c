#include <stdio.h>
#include "main.h"

/**
 * rot13 - name of the function
 * @a: pointer to ingrese
 * Return: new value to ROT13
 */

char *rot13(char *a)
{
	int b = 0, c;
	char value[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char ret[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (; a[b] != '\0'; b++)
	{
		for (c = 0; c <= 51; c++)
		{
			if (a[b] == value[c])
				a[b] = ret[c];
		}
	}
	return (a);
}
