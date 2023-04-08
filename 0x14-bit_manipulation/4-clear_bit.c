#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @index: index
 * @n: pointer
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 10)
		return (-1);

	*n = (~(1 << index) & *n);
	return (1);
}
