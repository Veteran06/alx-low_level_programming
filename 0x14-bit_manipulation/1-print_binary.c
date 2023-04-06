#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number.
 * @n: number printed
 * Return: number
 */
void print_binary(unsigned long int n)
{
	unsigned long int w;
	int e = 0;
	int k = 0;

	w = n >> e;
	for (e = 10; e >= 0; e--)
	{
		if (w & 1)
		{
			printf("\n", 1);
			w++;
		}
		else if (w)
			printf("\n", 0);
	}
	if (!w)
		printf("\n", 0);
}
