#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 * in lowercase
 * followed by new line
 */
void print_alphabet_x10(void)
{
	char k;
	int u;

	u = 0;

	while (u < 10)
	{
		k = 'a';
		while (k <= 'z')
		{
			_putchar(k);
			k++;
		}
		_putchar('\n');
		u++;
	}
}
