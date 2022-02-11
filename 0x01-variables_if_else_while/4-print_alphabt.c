#include <stdio.h>

/**
 * main - function
 * for: cicle of lowercase
 * Return: 0
 */

int main(void)
{
	int lowercase;

	for (lowercase = 97; lowercase < 123 ; lowercase++)
	{
		if (lowercase != 113 && lowercase != 101)
		{
			putchar(lowercase);
		}
	}
	putchar('\n');
	return (0);
}
