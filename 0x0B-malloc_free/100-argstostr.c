#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - concatenates all the arguments of your program
 * @ac: number of aruments
 * @av: array of arguments
 * Return: pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int w, e, k, leng;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (w = 0; w < ac; w++)
	{
		for (e = 0; av[w][e] != '\0'; e++)
			leng++;
		leng++;
	}
	str = malloc(sizeof(char) * (leng + 1));

	if (str == NULL)
		return (NULL);

	k = 0;

	for (w = 0; w < ac; w++)
	{
		for (e = 0; av[w][e] != '\0'; e++)
		{
			str[k] = av[w][e];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	return (str);
}
