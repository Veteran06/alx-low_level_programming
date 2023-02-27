#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: string to be be converted to an int
 * Return: converted int
 */
int _atoi(char *s)
{
	int j, k, m, len, l, digit;

	j = 0;
	k = 0;
	m = 0;
	len = 0;
	l = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;
	while (j < len && l == 0)
	{
		if (s[j] >= '0' && s[j] <= '9')
		{
			digit = s[j] - '0';
			if (k % 2)
				digit = -digit;
			m = m * 10 + digit;
			l = 1;
			if (s[j + 1] < '0' || s[j + 1] > '9')
				break;
			l = 0;
		}
		j++;
	}
	if (l == 0)
		return (0);
	return (m);
}


