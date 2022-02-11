#include <stdio.h>

/**
 * main - name of the function
 * for: cicle reverse lowercase
 * Return: 0
 */

int main(void)
{
	int lowercase;

	for (lowercase = 122; lowercase > 96; lowercase--)
		putchar(lowercase);

	putchar ('\n');
	return (0);
}
