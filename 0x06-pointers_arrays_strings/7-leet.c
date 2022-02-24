#include <stdio.h>
#include "main.h"

/**
 * leet - name of the function
 * @a: pointer to array
 * Return: array of value to ret
 */

char *leet(char *a)
{
	int i = 0, k;
	char s[] =  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s1[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (; str[i] != '\0'; i++)
	{
		for (k = 0; k <= 51; k++)
		{
			if (s[k] == str[i])
			{
				str[i] = s1[k];
			}
		}
	}
	return (str);
}
