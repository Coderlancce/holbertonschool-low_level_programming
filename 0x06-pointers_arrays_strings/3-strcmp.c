#include <stdio.h>
#include "main.h"

/**
 * _strcmp - name of the function
 * @s1: pointer to array compare
 * @s2: pointer to array compare
 * Return: s1 - s2 in ascii
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] == s2[a] && s1[a] != '\0')
		a++;

	return (s1[a] - s2[a]);
}
