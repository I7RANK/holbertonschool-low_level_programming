#include "holberton.h"
/**
 * print_numbers - prints the numbers from 0 to 9
 * Description: followed by a new line
 */
void print_numbers()
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar(i + '0');

	_putchar(10);
}
