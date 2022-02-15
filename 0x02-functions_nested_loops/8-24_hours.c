#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - name of the function
 * while: cicle of time in hours and minutes
 */

void jack_bauer(void)
{
	int h = 0, m;

	while (h < 24)
	{
		m = 0;
		while (m < 60)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
			m++;
		}
		h++;
	}
}
