#include "holberton.h"

/**
 * _puts_recursion - prints a string
 * Description: followed by a new line
 * @s: is the string
 * Return: no return
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(10);
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
