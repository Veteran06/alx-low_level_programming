#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @j: the int that the last digit is extracted from
 * Return: last digit of the int
 */
int print_last_digit(int j)
{
	int q;

	if (j < 0)
		j = -j;

	q = j % 10;

	if (q < 0)
		q = -q;

	_putchar(q + '0');

	return (q);
}
