#include "holberton.h"

/**
 * print_cheesboard - prints the cheesboard
 * Description: just print
 * @a: is the array of the chessboard
 * Return: no return
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, b = 0;

	for (i = 0; i < 8; i++)
	{
		for (b = 0; b < 8; b++)
			_putchar(a[i][b]);

		_putchar(10);
	}
}
