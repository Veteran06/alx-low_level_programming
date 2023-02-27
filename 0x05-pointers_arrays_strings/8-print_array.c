#include "main.h"

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line
 * @a: array name
 * @n: number of elements of the array to be printed
 * Return: a and n
 */
void print_array(int *a, int n)
{
	int k;

	for (k = 0; k < (n - 1); k++)
	{
		printf("%d,", a[k]);
	}
	if (k == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
