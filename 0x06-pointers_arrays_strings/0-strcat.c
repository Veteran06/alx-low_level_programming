#include "main.h"

/**
 * *_strcat -  function appends the src string to the dest string
 * overwriting the terminating null byte (\0) at the end of dest
 * and then adds a terminating null byte
 * @src: input
 * @dest: input
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int w;
	int e;

	w = 0;
	while (dest[w] != '\0')
	{
		w++;
	}
	e = 0;
	while (src[e] != '\0')
	{
		dest[w] = src[e];
		w++;
		e++;
	}
		dest[w] = '\0';
		return (dest);
}
