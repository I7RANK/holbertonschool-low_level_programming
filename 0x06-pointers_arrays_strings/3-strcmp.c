#include "holberton.h"

/**
 * _strcmp - compares two strings
 * Description: work exactly like strcmp
 * @s1: is the first string to comparate
 * @s2: is the second string to comparate
 * Return: returns one integer
 */
int _strcmp(char *s1, char *s2)
{
	int n1 = 0, n2 = 0, i = 0, ls1 = 0, ls2 = 0, ls = 0;

	while (s1[ls1] != '\0')
		ls1++;

	while (s2[ls2] != '\0')
		ls2++;

	if (ls1 >= ls2)
	{
		ls = ls1;
	}
	else
	{
		ls = ls2;
	}

	while (i < ls)
	{
		n1 = s1[i];
		n2 = s2[i];

		n1 = n1 - n2;

		if (n1 != 0)
			break;

		i++;
	}
	return (n1);
}
