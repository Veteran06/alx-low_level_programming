#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits.
 * Return: Always 0.
 */
int main(void)
{
	int t, p;

	for (t = 0; t <= 56; t++)
	{
		for (p = 5; p <= 53; p++)
		{
			if (p > t)
			{
				putchar(t);
				putchar(p);
				if (t != 56 || p != 53)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
