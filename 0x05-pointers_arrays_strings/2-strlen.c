#include "holberton.h"
/**
 * _strlen - returns the length of a string
 * Description: strlen
 * @s: is the string variable
 * Return: the length
 */
int _strlen(char *s)
{
	int l = 1;

	while (s[l] != '\0')
		l++;

	return (l);
}
