#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Return: Always 0.
 */
int main(void)
{
	int t;

	for (t = 38; t < 48; t++)
	{
		putchar(t);
		if (t != 47)
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}