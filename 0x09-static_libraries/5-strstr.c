#include "main.h"

/**
 * _strstr - function that locates a substring.
 * @haystack: input
 * @needle: input
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
        for (; *haystack != '\0'; haystack++)
        {
                char *k = haystack;
                char *w = needle;

        while (*k == *w && *w != '\0')
        {
                k++;
                w++;
        }
        if (*w == '\0')
                return (haystack);
        }
        return (0);
}
