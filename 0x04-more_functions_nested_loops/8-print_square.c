#include "holberton.h"
/**
 * print_square - prints a square
 * Description: followed by a new line
 */
void print_square(int size)
{
	int i, a;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (a = 1; a <= size; a++)
				_putchar('#');

			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
