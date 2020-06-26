#include "holberton.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * Description: folowed by a new line
 * @a: is the array
 * Return: return the pointer
 */
char *string_toupper(char *a)
{
	int i = 0, isupp;

	while (a[i] != '\0')
	{
		isupp = a[i];
		if (isupp >= 97 && isupp <= 122)
		{
			isupp = isupp - 32;
			a[i] = isupp;
		}
		i++;
	}
	return (a);
}
