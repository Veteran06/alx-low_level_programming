#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9, followed by a new line
 * Return: 0
 */
void print_most_numbers(void)
{
	int w;

	for (w = 48; w <= 58; w++)
	{
		if (w != 50)
		{
			if (w != 52)
			{
				_putchar(w);
			}
		}
	}
	_putchar('\n');
}


