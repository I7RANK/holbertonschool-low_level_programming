#include "holberton.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * Description: followed by a new line
 * @s: is the string
 * Return: no return
 */

void _print_rev_recursion(char *s)
{
	if (*(s + 1) == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	_putchar(*s);
	if (*(s - 1) == '\n')
		_putchar(10);
}
