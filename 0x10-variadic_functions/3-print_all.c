#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int w = 0;
	char *str, *e = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[w])
		{
			switch (format[w])
			{
				case 'c':
					printf("%s%c", e, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", e, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", e, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", e, str);
					break;
				default:
					w++;
					continue;
			}
			e = ",";
			w++;
		}
	}
	printf("\n");
	va_end(list);
}
