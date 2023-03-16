#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: string
 * @s2: string
 * @n: number of bytes to concatenate from s2 to s1
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;

	unsigned int w = 0, e = 0, k1 = 0, k2 = 0;

	while (s1 && s1[k1])
		k1++;
	while (s2 && s2[k2])
		k2++;
	if (n < k2)
		s = malloc(sizeof(char) * (k1 + n + 1));
	else
		s = malloc(sizeof(char) * (k2 + k2 + 1));

	if (!s)
		return (NULL);

	while (w < k1)
	{
		s[w] = s1[w];
		w++;
	}
	while (n < k2 && w < (k1 + n))
		s[w++] = s2[e++];
	while (n >= k2 && w < (k1 + k2))
		s[w++] = s2[e++];

	s[w] = '\0';
	return (s);
}
