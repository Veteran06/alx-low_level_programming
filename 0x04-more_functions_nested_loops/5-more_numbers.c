#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 */

void more_numbers(void)
{
	int w, s;

	for (w = 0; w < 10; w++)
	{
		for (s = 0; s < 15; s++)
		{
			if (s >= 10)
				_putchar(s / 10 + '0');
			_putchar(s % 10 + '0');
		}
		_putchar('\n');
	}
}
