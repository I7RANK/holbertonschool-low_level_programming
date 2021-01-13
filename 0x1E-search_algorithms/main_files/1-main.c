#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
	int array[] = {
		0, 1, 2, 3, 4, 5, 6, 7, 8, 9
	};
	int array2[17] = {
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 25, 48, 89
    };
	size_t size = sizeof(array) / sizeof(array[0]); /* 10 */

	printf("Found %d at index: %d\n\n", 2, binary_search(array, size, 2));
	printf("Found %d at index: %d\n\n", 5, binary_search(array, 5, 5));
	printf("Found %d at index: %d\n\n", 999, binary_search(array, size, 999));

    printf("Found at index: %d\n", binary_search(array2, 16, 12));

	(void)size;
	return (EXIT_SUCCESS);
}
