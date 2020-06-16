#include "holberton.h"
/**
 * print_last_digit - prints the last digit of a number
 * Description: prints the absolute value of a digit
 * @c: is a parameter
 * Return: the value of the last digit
*/
int print_last_digit(int c)
{
	if (c >= 1)
	{
		c = c % 10;
	}
	else
	{
		c = c % 10;
		c = c * -1;
	}

	_putchar(c + '0');
	return (c);
}
