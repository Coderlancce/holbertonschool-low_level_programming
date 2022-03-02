#include "main.h"

/**
 * _sqrt_recursion - name of the function
 * @n: value to square
 * Return: square menu
 */

int _sqrt_recursion(int n)
{
	return (pow_recursion(0, n));
}

/**
 * pow_recursion - name of the function
 * @a: value to power itself
 * @n: compare value of a if are square root
 * Return: value to power itself
 */

int pow_recursion(int a, int n)
{
	if (a * a == n)
		return (a);

	if (a * a > n)
		return (-1);

	return (pow_recursion(a + 1, n));
}
