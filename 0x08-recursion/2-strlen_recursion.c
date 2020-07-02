#include "holberton.h"

/**
 * _strlen_recursion - returns the length of a string
 * Description: followed by a new line
 * @s: is the string
 * Return: return the length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
