#include "main.h"
#include <stdlib.h>

/**
 *_memset - fills memory with constant byte
 *@s: memory to fill
 *@b: char to copy
 *@n: number of times to copy b
 *Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int w;

	for (w = 0; w < n; w++)
	{
		s[w] = b;
	}
	return (s);
}

/**
 *_calloc - allocates memory for an array, using malloc
 *@nmemb: number of elements in array
 *@size: size of each element
 *Return: pointer to allocated mem
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
	return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
	return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
