#include "search_algos.h"
#include <stdio.h>
#include <unistd.h>

void print_subarray(int *array, size_t start, size_t end);
void advanced_search(int *arr, size_t start, size_t end, int val, int *idx);

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * using the advanced Binary search algorithm
 * basicaly return the less index in the array equals the value searched for
 *
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: return the first index where value is located
 */
int advanced_binary(int *array, size_t size, int value)
{
	int idx = -1;

	if (array == NULL)
		return (-1);

	/* NO IS THE BEST WAY */
	if (size == 1)
	{
		print_subarray(array, 0, size - 1);
		if (array[0] == value)
			return (0);
		return (-1);
	}

	if (size == 2)
	{
		print_subarray(array, 0, size - 1);
		if (array[0] == value)
			return (0);
		print_subarray(array, 1, size - 1);
		if (array[1] == value)
			return (1);
		return (-1);
	}

	advanced_search(array, 0, size - 1, value, &idx);
	return (idx);
}

/**
 * print_subarray - print a sub array given two index
 *
 * @array: the array to print
 * @start: the indext where will start print
 * @end: the index where will end print
 */
void print_subarray(int *array, size_t start, size_t end)
{
	printf("Searching in array: ");
	while (start < end)
	{
		printf("%d, ", array[start]);
		start++;
	}
	printf("%d\n", array[start]);
}

/**
 * advanced_search - searches for a value in a sorted array of integers
 * using the advanced Binary search algorithm
 * with RECURSION
 *
 * @arr: is a pointer to the first element of the array to search in
 * @start: the indext where will start print
 * @end: the index where will end print
 * @val: is the value to search for
 * @idx: is a pointer to save the best index found
 */
void advanced_search(int *arr, size_t start, size_t end, int val, int *idx)
{
	size_t size = end - start;
	size_t index = (size / 2) + start;
	int middle_num = arr[index];

	if (start >= end)
	{
		if (val == middle_num)
			*idx = index;
		return;
	}

	print_subarray(arr, start, end);

	if (val == middle_num)
	{
		*idx = index;
		end = index;
	}
	if (val < middle_num)
	{
		end = index - 1;
	}
	else if (val > middle_num)
	{
		start = index + 1;
		if (start >= end)
			print_subarray(arr, start, end);
	}

	advanced_search(arr, start, end, val, idx);
}
