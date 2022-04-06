#include <stdio.h>
#include "main.h"

/**
 * print_number - name of the function
 * @n: value of ingrese
 * Return: none
 */

void print_number(int n)
{
	int number;
	unsigned int positive, size_d, obs_size_d = 1, store = 0;

	number = n;

	if (number < 0)
	{
		store = store + _putchar('-');
		positive = number * -1;
	}
	else
		positive = number;

	size_d = positive;
	while (size_d > 9)
	{
		size_d = size_d / 10;
		obs_size_d = obs_size_d * 10;
	}
	while (obs_size_d >= 1)
	{
		store = store + _putchar(((positive / obs_size_d) % 10) + '0');
		obs_size_d = obs_size_d / 10;
	}
}
