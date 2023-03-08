#include "main.h"

int check_pal(char *s, int w, int e);
int _strlen_recursion(char *s);

/**
 * is_palindrome - function that returns 1
 * if a string is a palindrome and 0 if not.
 * @s: string to reverse
 * Return: 1 if it is, 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns length string
 * @s: string
 * Return: length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks characters
 * @s: string
 * @w: iterator
 * @e: length
 * Return: 1 if palindrome, 0 not
 */
int check_pal(char *s, int w, int e)
{
	if (*(s + w) != *(s + e - 1))
		return (0);
	if (w >= e)
		return (1);
	return (check_pal(s, w + 1, e - 1));
}
