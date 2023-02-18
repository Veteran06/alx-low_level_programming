#include <stdio.h>

/**
 * main -  prints all possible different combinations of three digits.
 * Return: Always 0.
 */
int main(void)
{
	int k, l, m;

	for (k = 48; k < 58; k++)
	{
		for (l = 49; l < 58; l++)
		{
			for (m = 50; m < 58; m++)
			{
				if (m > l && l > k)
				{
					putchar(k);
					putchar(l);
					putchar(m);
					if (k != 55 || l != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
