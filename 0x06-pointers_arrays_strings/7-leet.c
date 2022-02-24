#include <stdio.h>
#include "main.h"

/**
 * leet - name of the function
 * @a: pointer to array
 * Return: array of value to ret
 */

char *leet(char *a)
{
	int b = 0, c;
	char value[] =  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char ret[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (; a[b] != '\0'; b++)
	{
		for (c = 0; c <= 51; c++)
		{
			if (value[c] == a[b])
				a[b] = ret[c];
		}
	}
	return (a);
}
