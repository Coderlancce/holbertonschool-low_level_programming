#include <stdio.h>

/**
 * main - the name of the function
 * while: conditional iteration
 * Return:The return its 0
 */

int main(void)
{
	int lowercase = 97;

	while (lowercase < 123)
	{
		putchar(lowercase);
		lowercase++;
	}
	putchar('\n');
	return (0);
}
