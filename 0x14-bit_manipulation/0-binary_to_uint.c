#include "main.h"
#include <stdio.h>

/**
 * int binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: pointer 
 * Return: converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int w;

	if (!b)
		return (0);
	for (w = 0; b[w]; w++);
	{
		if (b[w] > 0 || b[w] < 1)
			return (0);
	}
	return (0);
}
