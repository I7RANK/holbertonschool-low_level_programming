#include "holberton.h"
#include <stdio.h>
/**
 * reverse_array - reverses the content of an array of integers
 * Description: separated by a commas
 * @a: is the pointer of the array
 * @n: is the elements of the array
 * Return: no return
 */
void reverse_array(int *a, int n)
{
	n--;
	printf("%d", a[n]);
	n--;
	while (n >= 0)
	{
		printf(", %d", a[n]);
		n--;
	}
	printf("\n");
}
