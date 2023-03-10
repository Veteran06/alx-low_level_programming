#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts integer from string
 * @s: string
 * Return: integer
 */

int _atoi(char *s)
{
	int e, d, n, len, w, digit;

	e = 0;
	d = 0;
	n = 0;
	len = 0;
	w = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;
	while (e < len && w == 0)
	{
		if (s[e] >= '0' && s[e] <= '9')
		{
			digit = s[e] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			w = 1;
			if (s[e + 1] < '0' || s[e + 1] > '9')
				break;
			w = 0;
		}
		e++;
	}
	if (w == 0)
		return (0);
	return (n);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (success) 1 (error)
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
