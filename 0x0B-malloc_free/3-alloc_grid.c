#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: width of matrix
 * @height: height of matrix
 * Return: null on failure if 0 null
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int w, e;

	if (height <= 0 || width <= 0)
		return (NULL);

	array = (int **) malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);
	for (w = 0; w < height; w++)
	{
		array[w] = (int *) malloc(sizeof(int) * width);
		if (array[w] == NULL)
		{
			free(array);
			for (e = 0; e <= w; e++)
				free(array[e]);
			return (NULL);
		}
	}
	for (w = 0; w < height; w++)
	{
		for (e = 0; e < width; e++)
		{
			array[w][e] = 0;
		}
	}
		return (array);
}
