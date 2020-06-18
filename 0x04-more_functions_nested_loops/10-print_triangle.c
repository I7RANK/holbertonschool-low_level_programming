#include "holberton.h"
/**
 * print_triangle - prints a triangle
 * Description: followed by a new line
 * @size: triangle size
 */
void print_triangle(int size)
{
	int i, b, c;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (b = 1; b <= (size - i); b++)
				_putchar(32);

			for (c = 1; c <= i; c++)
				_putchar('#');

			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
