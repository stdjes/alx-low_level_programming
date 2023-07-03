#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints a chessboard (8x8 square)
 * @a: 2D array representing the chessboard.
 */
void print_chessboard(char (*a)[8])
{
	int r, c;

	for (r = 0; r < 8; r++)
	{
		for (c = 0; c < 8; c++)
		{
			printf("%c ", a[r][c]);
		}
		printf("\n");
	}
}
