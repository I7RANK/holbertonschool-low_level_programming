#include "holberton.h"

/**
 * _memcpy - copies n bytes from @src to @dest
 * Description: the function  copies  n bytes from memory area src to memory
 * area dest.
 * @dest: is the array of destiny
 * @src: is the arrary from copiesis the arrary to copies
 * @n: is the numbers of bytes to copy
 * Return: the array full
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i, num = n;

	for (i = 0; i < num; i++)
		dest[i] = src[i];

	return (dest);
}
