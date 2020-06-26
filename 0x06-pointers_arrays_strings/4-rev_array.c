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
	int a1 = 0, i;

	n--;
	for (i = 0; i <= n; i++)
	{
		a1 = a[n];
		a[n] = a[i];
		a[i] = a1;
		n--;
	}
}
