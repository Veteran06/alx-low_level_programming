#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: pointer
 * @b: character to be used
 * @n: value
 * Return: s value
 */
char *_memset(char *s, char b, unsigned int n)
{
	int w = 0;

	for (; n > 0; w++)
	{
		s[w] = b;
		n--;

	}
	return (s);
}
