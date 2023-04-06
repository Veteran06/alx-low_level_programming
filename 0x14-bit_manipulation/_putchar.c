#include <unistd.h>

/**
 * _putchar - character c to stdout 
 * @c: character
 * Return: 1 on success, -1 on error and errno is set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
