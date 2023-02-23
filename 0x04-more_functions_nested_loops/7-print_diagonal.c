#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @q: number of times of character
 */
void print_diagonal(int q)
{
	if
		(q <= 0)
	{
		_putchar('\n');
	}else
	{
		int w, p;

		for (w = 0; w < q; w++)
		{
			for (p = 0; p < q; p++)
			{
				if (w == p)
					_putchar('\\');
				else if (p < w)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
