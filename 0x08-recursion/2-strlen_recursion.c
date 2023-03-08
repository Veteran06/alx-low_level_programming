#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: pointer to a string
 * Return: length
 */

int _strlen_recursion(char *s)
{
	int longi = 0;

	if (*s)
	{
		longi++;
		longi += _strlen_recursion(s + 1);
	}
	return (longi);
}
