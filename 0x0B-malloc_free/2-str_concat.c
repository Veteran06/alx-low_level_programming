#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: string to concatenate
 * @s2: string to concatenate
 * Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int w = 0, e = 0, k1 = 0, k2 = 0;

	while (s1 && s1[k1])
		k1++;
	while (s2 && s2[k2])
		k2++;
	s3 = malloc(sizeof(char) * (k1 + k2 + 1));
	if (s3 == NULL)
		return (NULL);

	w = 0;
	e = 0;

	if (s1)
	{
		while (w < k1)
		{
			s3[w] = s1[w];
			w++;
		}
	}
	if (s2)
	{
		while (w < (k1 + k2))
		{
			s3[w] = s2[e];
			w++;
			e++;
		}
	}
	s3[w] = '\0';
	return (s3);
}
