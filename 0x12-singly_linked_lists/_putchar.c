#include <unistd.h>

/**
 * _putchar - writes the character to stdout
 * @c: character to print
 * Return: 1 on success, on error -1 is returned
 * and reeno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
