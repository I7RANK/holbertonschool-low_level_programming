#include "holberton.h"

/**
 * leet - encodes a string into 1337
 * Description: Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * @a: is the array
 * Return: return the pointer
 */
char *leet(char *a)
{
	char letter[] = "aAeEoOtTlL";
	char replace[] = "43071";
	int i, b;

	while (a[i] != '\0')
	{
		for (b = 0; b < 10; b++)
		{
			if (a[i] == letter[b])
				a[i] = replace[(b / 2)];
		}
		i++;
	}
	return (a);
}
