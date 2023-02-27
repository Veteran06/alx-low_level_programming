#include "main.h"

/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character, followed by a new line
 * @str: input
 * Return: string
 */
void puts2(char *str)
{
	int longi = 0;
	int t = 0;
	char *k = str;
	int l;

	while (*k != '\0')
	{
		k++;
		longi++;
	}
	t = longi - 1;
	for (l = 0; l <= t; l++)
	{
		if (l % 2 == 0)
		{
			_putchar(str[l]);
		}
	}
	_putchar('\n');
}
