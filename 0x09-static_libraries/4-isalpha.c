#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 * @c: to be checked
 * Return: 1 if letter, otherwise return 0
 */
int _isalpha(int c)
{
        return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
