#include <unistd.h>

/**
 * _putchar - writes char c to stdout
 * @c: print char
 * Return: 1 on success, -1 on error and set arrno appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
