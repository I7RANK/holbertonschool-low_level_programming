#include "holberton.h"

/**
 * main - print "Holberton"
 *
 * Return: Always 0.
 */

int main(void)
{
	char prthol[] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n'};
	int i;

	for (i = 0; i <= 8; i++)
		_putchar(prthol[i]);

	_putchar(10);
	return (0);
}
