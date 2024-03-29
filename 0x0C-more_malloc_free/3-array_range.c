#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: minimum range
 * @max: maximum range
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int *w;

	int e, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	w = malloc(sizeof(int) * size);

	if (w == NULL)
		return (NULL);

	for (e = 0; min <= max; e++)
		w[e] = min++;
	return (w);
}
