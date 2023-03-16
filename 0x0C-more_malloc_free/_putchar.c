#include "main.h"
#include <unistd.h>

/**
 * _putchar - character c to stdout
 * @c: character to input
 * Return: 1 on success, -1 on error and is set appropriately
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
