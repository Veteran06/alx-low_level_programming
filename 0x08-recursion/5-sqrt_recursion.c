#include "main.h"

int actual_sqrt_recursion(int n, int w);

/**
 * _sqrt_recursion - function returns the natural square root of a number
 * @n: number to get square root of
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - recurse to find natural square root
 * @n: number to calculate square root
 * @w: iterator
 * Return: square root
 */
int actual_sqrt_recursion(int n, int w)
{
	if (w * w > n)
		return (-1);
	if (w * w == n)
		return (w);
	return (actual_sqrt_recursion(n, w + 1));
}
