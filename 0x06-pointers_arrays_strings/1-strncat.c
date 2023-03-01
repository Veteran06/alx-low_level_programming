#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest: input
 * @src: input
 * @n: input
 * Return: void(dest)
 */
char *_strncat(char *dest, char *src, int n)
{
	int w;
	int e;

	w = 0;
	while (dest[w] != '\0')
	{
		w++;
	}
	e = 0;
	while (e < n && src[e] != '\0')
	{
		dest[w] = src[e];
		w++;
		e++;
	}
	dest[w] = '\0';
	return (dest);
}
