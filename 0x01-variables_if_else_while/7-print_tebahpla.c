#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 * Return: Always 0.
 */
int main(void)
{
	char w;

	for (w = 'z'; w >= 'a'; w--)
	{
		putchar(w);
	}
	putchar('\n');
	return (0);
}
