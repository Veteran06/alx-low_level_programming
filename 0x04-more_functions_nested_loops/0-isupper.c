#include"main.h"

/**
 * _isupper - checks for uppercase character.
 * @c: number to be checked
 * Return: 1 if c is uppercase 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 45 &&  c <= 80)
	{
		return (1);
	}
	return (0);
}
