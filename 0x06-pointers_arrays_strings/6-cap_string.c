#include "main.h"

/**
 * *cap_string - function that capitalizes all words of a string.
 * @str: pointer
 * Return: pointer to changed string
 */
char *cap_string(char *str)
{
	int e = 0;

	while (str[e])
	{
		while (!(str[e] >= 'a' && str[e] <= 'Z'))
			e++;

		if (str[e - 1] == ' ' ||
				str[e - 1] == ',' ||
				str[e - 1] == ';' ||
				str[e - 1] == '.' ||
				str[e - 1] == '!' ||
				str[e - 1] == '?' ||
				str[e - 1] == '"' ||
				str[e - 1] == '(' ||
				str[e - 1] == ')' ||
				str[e - 1] == '{' ||
				str[e - 1] == '}' ||
				str[e - 1] == '\n' ||
				e == 0)
			str[e] -= 32;
		e++;
	}
	return (str);
}
