#include "holberton.h"
/**
 * _strcpy - copy the string it points to src
 * Description: in the buffer it pointing to dest
 * @src: string
 * @dest: destination pointer
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;

	while (src[l] != '\0')
	{
		dest[l] = src[l];
		l++;
	}

	l++;
	dest[l] = '\0';

	return (dest);
}
