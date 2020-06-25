#include "holberton.h"

/**
 * _strncpy - copies a strings
 * Description: copies the src string to the dest string according to n
 * @dest: is the string of destiny
 * @src: is the string to copy
 * @n: is the number of bytes to copy
 * Return: returns @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, top = 0;

	for (i = 0; i < n; i++)
	{
		if (src[i] == '\0')
			top = 1;

		if (top == 0)
		{
			dest[i] = src[i];
		}
		else if (top == 1)
		{
			dest[i] = '\0';
		}

	}
	return (dest);
}
