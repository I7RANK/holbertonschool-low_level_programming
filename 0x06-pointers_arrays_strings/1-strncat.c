#include "holberton.h"

/**
 * _strncat - concatetenates two strings
 * Description: appends the src string to the dest string according to n
 * @dest: is the string of destiny
 * @src: is the string to concatenate
 * @n: is the number of bytes to concatenate
 * Return: returns the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int ld = 0, ls = 0, i;

	while (dest[ld] != '\0')
		ld++;

	while (src[ls] != '\0')
		ls++;

	for (i = 0; i < n; i++)
	{
		dest[ld] = src[i];
		ld++;

		if (src[i] == '\0')
			i = n + 1;
	}

	return (dest);
}
