#include "main.h"

/**
 * print_chessboard - function that prints the chessboard.
 * @a: array
 * return: 0
 */
void print_chessboard(char (*a)[8])
{
	int k;
	int w;

	for (k = 0; k < 8; k++)
	{
		for (w = 0; w < 8; w++)
			_putchar(a[k][w]);
		_putchar('\n');
	}
}
