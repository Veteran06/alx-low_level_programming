#include <stdio.h>

/**
 * main -  alphabet in lowercase, and then in uppercase
 * Return: Always 0.
 */
int main(void)
{
	char r;

	for (r  = 'a'; r <= 'z'; r++)
		putchar(r);
	for (r = 'A'; r <= 'Z'; r++)
		putchar(r);
	putchar('\n');
	return (0);
}
