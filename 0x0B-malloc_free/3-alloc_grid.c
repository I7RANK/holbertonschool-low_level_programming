#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: is a width
 * @height: is a height
 * Return: returns a pointer or NULL in case of failure or if @width or @height
 * is 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int **p, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(height * sizeof(int *));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));
		if (p[i] == NULL)
		{
			/*
			 * se debe liberar toda la memoria en caso de NULL
			 * primero libero la memoria que acabo de pedir p[i]
			 * y luego la que pedi al principio p
			 */
			for (j = 0; j <= i; j++)
				free(p[j]);
			free(p);
			return (NULL);
		}
		else
		{
			for (j = 0; j < width; j++)
				p[i][j] = 0;
		}
	}

	return (p);
}
