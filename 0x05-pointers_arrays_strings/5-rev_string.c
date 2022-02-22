#include <stdio.h>
#include "main.h"

/**
 * rev_string - name of the function
 * @s: pointer of ingrese
 * Return: none
 */

void rev_string(char *s)
{
	int a = 0, b = 0, m;


	while (s[a] != '\0')
		a++;

	a--;

	while (a > b)
	{
		m = s[a];
		s[a--] = s[b];
		s[b++] = m;
	}
}
