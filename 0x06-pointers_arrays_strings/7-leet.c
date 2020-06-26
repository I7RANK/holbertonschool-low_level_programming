#include "holberton.h"

/**
 * leet - encodes a string into 1337
 * Description: Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * @s1: is the array
 * Return: return the pointer
 */
char *leet(char *s1)
{
	int i, b;
	char replace[10][2] = {
		{'a', '4'},
		{'A', '4'},
		{'e', '3'},
		{'E', '3'},
		{'o', '0'},
		{'O', '0'},
		{'t', '7'},
		{'T', '7'},
		{'l', '1'},
		{'L', '1'}
	};
	for (i = 0; s1[i] != '\0'; i++)
	{
		for (b = 0; replace[b][0]; b++)
		{
			if (s1[i] == replace[b][0])
			{
				s1[i] = replace[b][1];
			}

		}
	}

	return (s1);
}
