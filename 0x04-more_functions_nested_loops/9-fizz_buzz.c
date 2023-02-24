#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * But for multiples of three print Fizz instead
 * of the number and for the multiples of five print Buzz
 * Return: 0
 */

int main(void)
{
	int p;

	for (p = 1; p <= 100; p++)
	{
		if (p % 3 == 0 && p % 5 != 0)
		{
			printf("Fizz");
		} else if (p % 5 == 0 && p % 3 != 0)
		{
			printf("Buzz");
		} else if (p % 3 == 0 && p % 5 == 0)
		{
			printf("FizzBuzz");
		} else if (p == 1)
		{
			printf("%d", p);
		} else
		{
			printf("%d", p);
		}
		if (p != 100)
		{
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}
