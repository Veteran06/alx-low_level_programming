#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes the character to stdout
 * @c: the character to print
 * Return: On success, on errno -1 is returned and errno is set appropriately
 */
int _putchar (char c);
{
	return (write(1, &c, 1));
}
