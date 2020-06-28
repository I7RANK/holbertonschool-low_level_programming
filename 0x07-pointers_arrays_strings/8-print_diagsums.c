#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * Description: separate by a comma and space
 * @a: is the matrix
 * @size: is the size of the matrix
 * Return: no return
 */
void print_diagsums(int *a, int size)
{
	int i, n, count = 0;

	n = a[0];
	for (i = 0; i < size - 1; i++)
	{
		count += size + 1;
		n += a[count];
	}
	printf("%d, ", n);

	count = size - 1;
	n = a[count];
	for (i = 0; i < size - 1; i++)
	{
		count += size - 1;
		n += a[count];
	}
	printf("%d\n", n);
}
