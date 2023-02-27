#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * followed by new line
 * @a: integer to swap
 * @b: second integer to swap
 */
void swap_int(int *a, int *b)
{
	int k;

	k = *a;
	*a = *b;
	*b = k;
}
