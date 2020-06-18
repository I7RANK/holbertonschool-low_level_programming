#include "holberton.h"
/**
 * print_diagonal - draws a diagonal line in the terminal.
 * Description: followed by a new line
 * @n: number of diagonal lines to draws in the terminal
 */
void print_diagonal(int n)
{
	int i, a = 1;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (a = 1; a < i; a++)
				_putchar(32);

			_putchar(92);
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
