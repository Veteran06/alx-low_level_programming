#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: pointer
 * Return: Null if success, pointer to the duplicated string on success
 */

char *_strdup(char *str)
{
	char *duplicate;
	unsigned int w, leng;

	w = 0;
	leng = 0;

	if (str == NULL)
		return (NULL);
	while (str[leng])
		leng++;
	duplicate = malloc(sizeof(char) * (leng + 1));
	if (duplicate == NULL)
		return (NULL);
	while ((duplicate[w] = str[w]) != '\0')
		w++;
	return (duplicate);
}
