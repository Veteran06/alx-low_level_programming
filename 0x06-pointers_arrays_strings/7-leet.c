#include "main.h"

/**
 * *leet - function that encodes a string into 1337
 * @w: input
 * Return: w
 */
char *leet(char *w)
{
	int e, m;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (e = 0; w[e] != '\0'; e++)
	{
		for (m = 0; m < 10; m++)
		{
			if (w[e] == s1[m])
			{
				w[e] = s2[m];
			}
		}
	}
	return (w);
}
