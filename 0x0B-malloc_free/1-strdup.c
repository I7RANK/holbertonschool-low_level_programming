#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter
 * @str: string to duplicate
 * Return: return NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *s;
	int i, ln;

	if (str == NULL)
		return (NULL);

	for (ln = 0; str[ln]; ln++)
	{}

	s = malloc(ln * sizeof(char));
	if (s == NULL)
		return (NULL);

	for (i = 0; i < ln; i++)
		s[i] = str[i];

	s[i] = '\0';
	return (s);
}
