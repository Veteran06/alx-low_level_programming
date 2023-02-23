#include "main.h"

/**
 * print_line -  draws a straight line in the terminal
 * @w: number of times the character
 */

void print_line(int w)
{
	if (w <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int e;

		for (e = 1; e <= w; e++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
