#include "holberton.h"

/**
 * _memset - fill the memory with a byte constant
 * Description: the constant byte is the variable b
 * @s: is the array
 * @b: is the constant
 * @n: is the numbers of bytes to fill
 * Return: the array full
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i, num = n;

	for (i = 0; i < num; i++)
		s[i] = b;

	return (s);
}
