#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 * @size: square size
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int p, q;

		for (p = 0; p < size; p++)
		{
			for (q = 0; q < size; q++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
