#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: returns the pointer of the new concatenates string
 * or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, ln;

	for (ln = 0; s1[ln]; ln++)
	{}
	for (i = 0; s2[i]; i++)
	{}

	s = malloc((ln + i - 1) * sizeof(char));
	if (s == NULL)
		return (NULL);

	for (i = 0; i < ln; i++)
		s[i] = s1[i];

	for (i = 0; s2[i]; i++)
	{
		s[ln] = s2[i];
		ln++;
	}

	s[ln] = '\0';
	return (s);
}
