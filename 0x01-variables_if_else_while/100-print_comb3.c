#include <stdio.h>

/**
 * main - name of the function
 * for: cicle of numbers
 * if: conditional for comma and space
 * Return: 0
 */

int main()
{
	int a, b;
	int coma = 44;
	int space = 32;

	for (a = 48; a < 58; a++)
	{
		for (b = 48; b < 58; b++)
		{
			if (a < b)
			{
				putchar(a);
				putchar(b);
				if (a != 56)
				{
					putchar(coma);
					putchar(space);
				}
			}
		}
	}

	putchar('\n');
	return 0;
}
