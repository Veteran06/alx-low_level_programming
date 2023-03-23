#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -  returns the sum of all its parameters
 * @....: variable number of parameters to sum up
 * @n: number of parameters passed to the function
 * Return: if n == 0 - 0.
 * otherwise - sum of parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int w, sum = 0;

	va_start(ap, n);

	for (w = 0; w < n; w++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
