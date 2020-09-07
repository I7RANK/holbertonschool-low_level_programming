#include "holberton.h"

/**
 * _strcat - concatetenates two strings
 * Description: appends the src string to the dest string
 * @dest: is the string of destiny
 * @src: is the string to concatenate
 * Return: returns the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int ld = 0, ls = 0, i;

	while (dest[ld] != '\0')
		ld++;

	while (src[ls] != '\0')
		ls++;

	for (i = 0; i <= ls; i++)
	{
		dest[ld] = src[i];
		ld++;
	}

	return (dest);
}
