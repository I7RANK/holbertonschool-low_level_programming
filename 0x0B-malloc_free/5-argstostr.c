#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: amount of arguments
 * @av: pointers to the arguments
 * Return: NULL if ac == 0 or av == NULL
 * a pointer to a new string or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *s, *arg;
	int i, j, count, ichar;

	for (i = 0; i < ac; i++)
	{
		arg = av[i];
		for (j = 0; arg[j]; j++)
		{
			count++;
		}
		count++;
	}

	s = malloc((count + 1) * sizeof(char));

	for (i = 0; i < ac; i++)
	{
		arg = av[i];
		for (j = 0; arg[j]; j++)
		{
			s[ichar] = arg[j];
			ichar++;
		}
		s[ichar] = 10;
		ichar++;
	}
	return (s);
}
