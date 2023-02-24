#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143,
 * followed by a new line.
 * Return: 0
 */
int main(void)
{
	long int k;
	long int max;
	long int i;

	k = 612852475143;
	max = -1;

	while (k % 2 == 0)
	{
		max = 2;
		k /= 2;
	}
	for (i = 3; i <= sqrt(k); i = i + 2)
	{
		while (k % i == 0)
		{
			max = i;
			k = k / i;
		}
	}
	if (k > 2)
		max = k;

	printf("%ld\n", max);

	return (0);
}
