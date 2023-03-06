#include "main.h"

/**
 * _memcpy -  function that copies memory area.
 * @dest: destination
 * @src: source
 * @n: input
 * Return: memory copied with n changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int w = n;
	int e = 0;

	for (; e < w; e++)
	{
		dest[w] = src[w];
		n--;
	}
	return (dest);
}

