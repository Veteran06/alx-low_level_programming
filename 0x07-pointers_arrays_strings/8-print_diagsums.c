#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: input
 * @size: input
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int sumk, sumw, e;

	sumk = 0;
	sumw = 0;

	for (e = 0; e < size; e++)
	{
		sumk = sumk + a[e * size + e];
	}
	for (e = size - 1; e >= 0; e--)
	{
		sumw += a[e * size + (size - e - 1)];
	}
	printf("%d, %d\n", sumk, sumw);
}
