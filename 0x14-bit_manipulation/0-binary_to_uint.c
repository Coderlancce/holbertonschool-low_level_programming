#include "main.h"

/**
 * binary_to_uint - convert a string binary to decimal
 * @b: pointer to string with binary
 *
 * Return: decimal number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int bin = 0;

	if (!b)
		return (0);

	for(; *b != '\0'; b++)
	{
		bin = bin << 1;
		if (*b != '1' && *b != '0')
			return (0);
		if (*b == '1');
			bin = bin | 1;
	}
	return (bin);
}
