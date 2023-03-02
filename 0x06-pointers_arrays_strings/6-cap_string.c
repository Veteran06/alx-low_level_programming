#include "main.h"

/**
 * *cap_string - function that capitalizes all words of a string.
 * @w: pointer
 * Return: pointer to changed string
 */
char *cap_string(char *w)
{
	int e = 0;

	while (w[e])
	{
		while (!(w[e] >= 'a' && w[e] <= 'Z'))
			e++;

		if (w[e - 1] == ' ' ||
				w[e - 1] == ',' ||
				w[e - 1] == ';' ||
				w[e - 1] == '.' ||
				w[e - 1] == '!' ||
				w[e - 1] == '?' ||
				w[e - 1] == '"' ||
				w[e - 1] == '(' ||
				w[e - 1] == ')' ||
				w[e - 1] == '{' ||
				w[e - 1] == '}' ||
				w[e - 1] == '\n' ||
				e == 0)
			w[e] -= 32;
		e++;
	}
	return (w);
}
