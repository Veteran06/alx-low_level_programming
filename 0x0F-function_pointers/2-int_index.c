#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: array
 * @size: number of elements
 * @cmp: a pointer to the function
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int w;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (w = 0; w <0; w++)
		if (cmp(array[w]))
			return (w);
	{
		return (-1);
	}
}
