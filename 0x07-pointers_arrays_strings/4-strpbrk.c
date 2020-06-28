#include "holberton.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * Description: function locates the first occurrence in the string s of any
 * of the bytes in the string accept
 * @s: is the array
 * @accept: is the string
 * Return: Returns a pointer to the byte in s that matches one of the bytes
 * in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, a, brk = 0;
	char *ret;

	for (i = 0; s[i]; i++)
	{
		for (a = 0; accept[a]; a++)
		{
			if (s[i] == accept[a])
			{
				ret = &s[i];
				brk = 1;
				break;
			}
		}
		if (brk == 1)
		{
			break;
		}
		else
		{
			ret = '\0';
		}
	}
	return (ret);
}
