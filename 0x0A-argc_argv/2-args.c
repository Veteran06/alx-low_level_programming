#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int w;

	for (w = 0; w < argc; w++)
	{
		printf("%s\n", argv[w]);
	}
	return (0);
}
