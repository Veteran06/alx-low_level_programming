#include "main.h"

/**
 * _strcmp - function that compares two strings.
 * @s1: input
 * @s2: input
 * Return: s1 - s2
 */
int _strcmp(char *s1, char *s2)
{
	int w;

	w = 0;
	while (s1[w] != '\0' && s2[w] != '\0')
	{
		if (s1[w] != s2[w])
		{
			return (s1[w] - s2[w]);
		}
		w++;
	}
	return (0);
}
