#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: input
 * @accept: input
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int e = 0;
	int w;

	while (*s)
	{
		for (w = 0; accept[w]; w++)
		{
			if (*s == accept[w])
			{
				e++;
				break;
			}
			else if (accept[w + 1] == '\0')
				return (e);
		}
		s++;
	}
	return (e);
}
