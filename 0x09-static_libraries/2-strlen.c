#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 * followed by a new line
 * @s: string
 * Return: lengt of string
 */
int _strlen(char *s)
{
        int longi = 0;

        while (*s != '\0')
        {
                longi++;
                s++;
        }
        return (longi);
}
