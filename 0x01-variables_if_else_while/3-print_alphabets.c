#include <stdio.h>

/**
 * main - function
 * while: cicle lowercase and uppercase
 * Return: 0
 */

int main(void)
{
	int lowercase = 97;
	int uppercase = 65;

	while (lowercase < 123)
	{
		putchar(lowercase);
		lowercase++;
	}
	while (uppercase < 91)
	{
		putchar(uppercase);
		uppercase++;
	}
	putchar('\n');
	return (0);
}
