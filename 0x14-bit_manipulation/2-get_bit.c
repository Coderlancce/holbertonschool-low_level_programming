#include "main.h"

/**
 * get_bit - search bit in position index
 * @n: integrer
 * @index: position te search
 *
 * Return: the number search in position
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 60)
		return (-1);
	if (index == 0)
		return (n & 1);
	return (get_bit(n >> 1, index - 1));
}
