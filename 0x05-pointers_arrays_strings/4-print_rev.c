#include "holberton.h"
/**
 * print_rev - prints a string in reverse
 * Description: followed by a new line
 * @s: is the string
 * Return: no return
 */
void print_rev(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}

	while (l >= 0)
	{
		l--;
		_putchar(s[l]);
	}
	_putchar(10);
}
