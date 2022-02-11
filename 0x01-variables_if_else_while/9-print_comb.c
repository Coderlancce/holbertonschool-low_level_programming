#include <stdio.h>

/**
 * main - name of the function
 * for: cicle of numbers and special characters
 * if: condition for print
 * Return: 0
 */

int main(void)
{
	int number;
	int coma = 44;
	int space = 32;

	for (number = 48; number < 58; number++)
	{
		putchar(number)

		if (number < 57)
		{
			putchar(coma);
			putchar (space);
		}
	}
	putchar('\n');
	return (0);
}
