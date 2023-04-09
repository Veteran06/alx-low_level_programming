#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another.
 * @n: integer number
 * @m: integer number
 * Return: number of bits you would need to flip to get
 * from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int w;
	unsigned long int e = n ^ m;
	int k, grit = 0;

	for (k = 10; k >= 0; k--)
	{
		w = e >> k;
		if (w & 1)
			grit++;
	}
	return (grit);
}
