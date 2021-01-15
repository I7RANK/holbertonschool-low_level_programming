#include "search_algos.h"
#include <stdio.h>
#include <math.h>

size_t check_subarray(int *array, size_t jump1, int value, size_t size);

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 *
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: return the first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t to_jump = sqrt(size), jump1 = 0, jump2 = 0;
	char *str_found = "Value found between indexes [%d] and [%d]\n";

	if (array == NULL)
		return (-1);

	printf("Value checked array[%d] = [%d]\n", (int)jump2, array[jump2]);

	while (1)
	{
		jump2 += to_jump;

		if (jump2 > size - 1)
			break;

		if (array[jump2] >= value)
			break;

		printf(
			"Value checked array[%d] = [%d]\n",
			(int)jump2,
			array[jump2]
		);

		jump1 = jump2;
	}

	printf(str_found, (int)jump1, (int)jump2);
	return (check_subarray(array, jump1, value, size));
}

/**
 * check_subarray - search in a sub_arrar for the value
 *
 * @array: the array to print
 * @jump1: the indext where will start print
 * @value: the value to search for
 * @size: the array size
 *
 * Return: the index of element or -1 if not found
 */
size_t check_subarray(int *array, size_t jump1, int value, size_t size)
{
	while (jump1 < size)
	{
		printf("Value checked array[%d] = [%d]\n", (int)jump1, array[jump1]);

		if (array[jump1] == value)
			return (jump1);
		jump1++;
	}

	return (-1);
}
