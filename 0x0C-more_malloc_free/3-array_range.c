#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - creates a array of integers
 * @min: minimal number
 * @max: maximum number
 * Return: return the pointer or NULL if any variable is 0 or if malloc fails
*/
int *array_range(int min, int max)
{
	int *arr, i, j;

	if (min > max)
		return (NULL);

	j = (max - min) + 1;

	arr = malloc(j * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < j; i++)
		arr[i] = min + i;

	return (arr);
}
