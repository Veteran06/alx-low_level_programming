#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars initializes it with a specific char
 * @c: character to be initialized
 * @size: size of array
 * Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);

	if (size == 0 || array == 0)
		return (NULL);
	while (size--)
		array[size] = c;
	return (array);
}
