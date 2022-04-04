#include "main.h"

/**
 * set_bit - put 1 and move index posiiton and add to *n
 * @n: pointer with number
 * @index: posiitions to move
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int add = 0;

	if (index > 20)
		return (-1);
	add = 1 << index;
	*n = *n | add;
	return (1);
}
