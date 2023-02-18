#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers.
 * Return: Always 0.
 */
int main(void)
{
	int k, q;

	for (k = 0; k < 100; k++)
	{
		for (q = 0; q < 100; q++)
		{
			if (k < q)
			{
				putchar((k / 10) + 48);
				putchar((k % 10) + 48);
				putchar(' ');
				putchar((q / 10) + 48);
				putchar((q % 10) + 48);
				if (k != 98 || q != 99)
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
