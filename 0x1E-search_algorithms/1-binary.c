#include <stdio.h>
#include <unistd.h>

void print_subarray(int *array, size_t start, size_t end);

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 *
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: return the first index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned int start = 0, end = size - 1;
	unsigned int sub_index, sub_size = size - 1;
	int middle_num;

	if (array == NULL)
		return (-1);

	while (1)
	{
		if (start > end)
		{
			start = end;
			print_subarray(array, start, end);
			return (-1);
		}

		print_subarray(array, start, end);

		sub_index = (sub_size / 2) + start;
		middle_num = array[sub_index];

		if (middle_num == value)
			return (sub_index);
		else if (value < middle_num)
		{
			end = sub_index - 1;
			sub_size = sub_index - 1;
		}
		else if (value > middle_num)
		{
			start = sub_index + 1;
			sub_size = sub_index;
		}

		/* sleep(1); */
	}

	return (-1);
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
