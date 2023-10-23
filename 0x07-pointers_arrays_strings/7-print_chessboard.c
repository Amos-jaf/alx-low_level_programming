#include "main.h"

/**
 * print_chessboard - function that prints chessboard
 * @a: input array
 * Description: utilizes a nested for loop to print the elements of the
 * chessboard
 * Return: (void)
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
}
