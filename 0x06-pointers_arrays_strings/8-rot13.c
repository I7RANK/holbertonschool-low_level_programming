#include "holberton.h"

/**
 * rot13 - encodes a string using rot13
 * Description: followed by a new line
 * @a: is the array
 * Return: return the pointer
 */
char *rot13(char *a)
{
	char rot1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, b;

	for (i = 0; a[i]; i++)
	{
		for (b = 0; b <= 51; b++)
		{
			if (a[i] == rot1[b])
			{
				a[i] = rot2[b];
				break;
			}
		}
	}

	return (a);
}
