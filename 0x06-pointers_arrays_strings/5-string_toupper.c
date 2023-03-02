#include "main.h"

/**
 * string_toupper - function that changes all lowercase to uppercase
 * @w: pointer
 * Return: w
 */
char *string_toupper(char *w)
{
	int e;

	e = 0;
	while (w[e] != '\0')
	{
		if (w[e] >= 'a' && w[e] <= 'z')
			w[e] = w[e] - 32;
		e++;
	}
	return (w);
}
