#include <stdio.h>
#include "main.h"

/**
 * times_table - name of the function
 * Return: none
 */

void times_table(void)
{
	int a = 0;

	while (a < 10)
	{
		int b = 0;
		while (b < 10)
		{
			int c = b * a;

			if (b == 0)
			{

			}
			else
			{
				if (c / 10 != 0)
				{
					_putchar(44);
					_putchar(' ');
				}
				else
				{
					_putchar(44);
					_putchar(' ');
					_putchar(' ');
				}
			}
			if (c / 10 == 0)
			{
				_putchar(c + '0');
			}
			else
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}
