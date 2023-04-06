#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number.
 * @n: number printed
 * Return: number
 */
void print_binary(unsigned long int n)
{
	unsigned long int w;
	int e, k = 0;

	w = n >> e;
	for (e = 10; e >= 0; e--)
	{
		if (w & 1)
		{
			_putchar("1");
			k++;
		}
		else if (k)
			_putchar("0");
	}
	if (!k)
		_putchar("0");
}
