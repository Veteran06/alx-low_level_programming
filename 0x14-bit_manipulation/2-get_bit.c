#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: number
 * @index: index
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int w;

	if (index > 10)
		return (-1);

	w = (n >> index) & 1;
	return (w);
}
