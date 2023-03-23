#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: lists of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int w = 0, k, e = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(valist, format);
	while (format && format[w])
	{
		k = 0;
		while (t_arg[k])
		{
			if (format[w] == t_arg[k] && e)
			{
				printf(", ");
				break;

			} k++;
		}
		switch (format[w])
		{
			case 'c':
				printf("%c", va_arg(valist, int)), c = 1;
				break;
			case 'i':
				printf("%d", va_arg(valist, int)), c = 1;
				break;
			case 'f':
				printf("%f", va_arg(valist, double)), c = 1;
				break;
			case 's':
				str = va_arg(valist, char *), c = 1;
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;

		} w++;
	}
	printf("\n"), va_end(valist);
}
