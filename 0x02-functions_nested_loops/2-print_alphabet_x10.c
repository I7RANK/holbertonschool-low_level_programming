#include "holberton.h"
/**
 * print_alphabet_x10 - print the alphabet in lowercase 10 times
 * Description: call to print the alphabet 10 times followed by a new line
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int i, a;

	for (i = 0; i <= 9; i++)
	{
		for (a = 97; a <= 122; a++)
			_putchar(a);

		_putchar(10);
	}
}
