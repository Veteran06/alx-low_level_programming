#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, except q and e.
 * followed by a new line
 * Return: 0.
 */
int main(void)
{
	char k = 'a';

	while (k <= 'z')
	{
		if (k != 'e' && k != 'q')
	{
		putchar(k);
	}
		k++;
	}
	putchar('\n');
	return (0);
}
