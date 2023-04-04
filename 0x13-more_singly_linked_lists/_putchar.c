#include <unistd.h>

/**
 * _putchar - writes the char c to stdout
 * @c: the character to print
 * Return: 1 on success, -1 on error,
 * errno is set approriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
