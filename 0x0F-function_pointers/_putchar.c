#include "function_pointers.h"
#include <unisdt.h>

/**
 * _putchar - write character c to stdout
 * @c: character to print
 * Reurn: 1 on success, -1 on error, and is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
