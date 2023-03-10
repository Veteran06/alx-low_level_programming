#include "main.h"

/**
 * char *_strcpy - function that copies the string pointed to by src
 * including the terminating null byte (\0), to the buffer pointed to by dest
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
        int k = 0;
        int w = 0;

        while (*(src + k) != '\0')
        {
                k++;
        }
        for (; w < k; w++)
        {
                dest[w] = src[w];
        }
        dest[w] = '\0';
        return (dest);
}
