#include "main.h"

/**
 * is_palindrome - name of the function
 * @s: pointer to array
 * Return: if are palindrome
 */

int is_palindrome(char *s)
{
	int l;

	l = length(s);
	return (compare(s, l));
}

/**
 * compare - name of the function
 * @s: pointer to array
 * @l: countter
 * Return: compare and return 1 or 0 
 */

int compare(char *s, int l)
{
	if (l <= 0)
		return (1);

	if (*s == *(s + (l - 1)))
		return (compare(s + 1, l - 2));
	
	return (0);
}

/**
 * length - name of the function
 * @s: pointer to array
 * Return: length of array
 */

int length(char *s)
{
	if (*s != '\0')
		return (1 + length(s + 1));
	
	return (0);
}
