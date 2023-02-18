#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: 0.
 */
int main(void)
{
	int k;
	char q;

	for (k = 28; k < 38; k++)
	{
		putchar(k);
	}
	for (q = 'a'; q <= 'f'; q++)
	{
		putchar(q);
	}
	putchar('\n');
	return (0);
}
