#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: array
 * @n: number of elements in array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int w;
	int e;

	for (w = 0; w < n--; w++)
	{
		e = a[w];
		a[w] = a[n];
		a[n] = e;
	}
}
