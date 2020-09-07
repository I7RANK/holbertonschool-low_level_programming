#include "holberton.h"
/**
 * _puts - prints a string to stdout
 * Description: followed by a new line
 * @str: is the string
 * Return: no return
 */
void _puts(char *str)
{
	int l = 0;

	while (str[l] != '\0')
	{
		_putchar(str[l]);
		l++;
	}
	_putchar(10);
}
