#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 * Description: the library string.h provides a similar function strspn
 * @s: is the array
 * @accept: is the string
 * Return: Returns the number of bytes in the initial segment of s which
 * consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, a;
	unsigned int ret = 0;

	for (i = 0; s[i]; i++)
	{
		if ((s[i] >= 65 && s[i] <= 90) ||
		    (s[i] >= 97 && s[i] <= 122))
		{
			for (a = 0; accept[a]; a++)
			{
				if (s[i] == accept[a])
					ret++;
			}
		}
		else
		{
			break;
		}
	}
	return (ret);
}
