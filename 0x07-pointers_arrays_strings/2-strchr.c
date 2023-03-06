#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 * @s: input
 * @c: input
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int w = 0;

	for (; s[w] >= '\0'; w++)
	{
		if (s[w] == c)
			return (&s[w]);
	}
	return (0);
}
