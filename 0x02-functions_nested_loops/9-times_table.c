#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int w, r, s;

	for (w = 0; w < 10; w++)
	{
		for (r = 0; r < 10; r++)
		{
			s = r * w;
			if (r == 0)
			{
				_putchar(s + '0');
			}
			if (s < 10 && r != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(s + '0');
			}
			else if (s >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((s / 10) + '0');
				_putchar((s % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
