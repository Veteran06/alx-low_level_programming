#include "main.h"

int actual_prime(int n, int w);

/**
 * is_prime_number - function that returns 1
 * if the input integer is a prime number, otherwise return 0.
 * @n: number
 * Return: 1 if prime , 0 not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
/**
 * actual_prime - calculates if number is prime recursively
 * @n: number
 * @w: iterator
 * Return: 1 if n prime, 0 not
 */
int actual_prime(int n, int w)
{
	if (w == 1)
		return (1);
	if (n % w == 0 && w > 0)
		return (0);
	return (actual_prime(n, w - 1));
}
