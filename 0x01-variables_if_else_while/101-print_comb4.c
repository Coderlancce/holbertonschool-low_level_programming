#include <stdio.h>

/**
 * main - name of the function
 * for: cicle of 0 to 9
 * if: condition for print
 * Return: 0
 */

int main(void)
{
	int a;
	int b;
	int c;
	int coma = 44;
	int space = 32;

	for (a = 48; a < 58; a++)
	{
		for (b = 48; b < 58; b++)
		{
			for (c = 48; c < 58; c++)
			{
				if (a < b && b < c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a != 55)
					{
						putchar(coma);
						putchar(space);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
