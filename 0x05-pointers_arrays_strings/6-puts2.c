#include "holberton.h"
/**
 * puts2 - print every two characters
 * Description: starting with the first
 * @str: is the string
 * Return: no return
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if ((i % 2) == 0)
			_putchar(str[i]);

		i++;
	}
	_putchar(10);
}
