#include "holberton.h"
/**
 * puts_half - prints half of a string
 * Description: print the second half of the string
 * @str: is the string
 * Return: no return
 */
void puts_half(char *str)
{
	int l = 0;

	while (str[l] != '\0')
		l++;

	if ((l % 2) == 0)
	{
		l /= 2;
	}
	else
	{
		l = ((l + 1) / 2);
	}

	while (str[l] != '\0')
	{
		_putchar(str[l]);
		l++;
	}

	_putchar(10);
}
