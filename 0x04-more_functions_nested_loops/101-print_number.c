#include "holberton.h"
/**
 * print_number - prints a integer number
 * Description: followed by a space
 * @n: is the natural number
 * Return: no return
 */
void print_number(int n)
{
	int absol = n, absol2, size = 1, putnum;

	if (n <= 0)
	{
		absol = absol * -1;
	}

	absol2 = absol;

	while (absol >= 10)
	{
		absol /= 10;
		size *= 10;
	}

	absol = absol2;
	if (n < 0)
	{
		_putchar('-');
	}

	if (size == 1)
	{
		_putchar(absol + '0');
	}
	else
	{
		while (size >= 1)
		{
			putnum = absol / size;
			absol %= size;
			size /= 10;
			_putchar(putnum + '0');
		}
	}
}
