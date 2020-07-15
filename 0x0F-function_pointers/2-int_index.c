#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches a integer number
 * @array: array of numbers
 * @size: is the array size
 * @cmp: is the function pointer
 * Return: na
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, ret = 0;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		ret = cmp(array[i]);

		if (ret != 0)
			break;
	}

	return (i);
}
