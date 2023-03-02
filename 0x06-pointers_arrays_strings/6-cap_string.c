#include "main.h"

/**
 * *cap_string - function that capitalizes all words of a string.
 * @str: pointer
 * Return: pointer to changed string
 */
char *cap_string(char *str)
{
	int index = 0;

	while (str[index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'Z'))
			index++;

		if (str[index - 1] == ' ' ||
				str[index - 1] == ',' ||
				str[index - 1] == ';' ||
				str[index - 1] == '.' ||
				str[index - 1] == '!' ||
				str[index - 1] == '?' ||
				str[index - 1] == '"' ||
				str[index - 1] == '(' ||
				str[index - 1] == ')' ||
				str[index - 1] == '{' ||
				str[index - 1] == '}' ||
				str[index - 1] == '\n' ||
				index == 0)
			str[index] -= 32;
		index++;
	}
	return (str);
}
