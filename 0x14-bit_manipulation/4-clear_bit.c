#include "main.h"

/**
 * clear_bit - put 1 and move index posiiton and compare with *n
 * @n: pointer with number
 * @index: posiitions to move
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int add;

	if (index > 15)
		return (-1);
	add = 1 << index;
	*n = *n & (~add);
	return (1);
}
