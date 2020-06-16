#include "holberton.h"
/**
 * print_sign - print the sign of a numeber
 * Description: the function return 1 if the sign is +, 0 if is 0 or -1 if is -
 * @c: is the parameter
 * Return: 0, 1, -1.
 */
int print_sign(int c)
{
	int i;

	if (c < 0)
	{
		i = -1;
		_putchar(45);
	}
	else if (c > 0)
	{
		i = 1;
		_putchar(43);
	}
	else
	{
		i = 0;
		_putchar(48);
	}

	return (i);
}
