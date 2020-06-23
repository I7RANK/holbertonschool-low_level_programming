#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array
 * Description: the numbers is separated by commas
 * @a: is the array
 * @n: is the number
 * Return: no return
 */
void print_array(int *a, int n)
{
	int i = 0;

	n--;
	for (i = 0; i <= n; i++)
	{
		printf("%d", a[i]);
		if (i == n)
		{}
		else
		{
			printf(", ");
		}
	}

	putchar(10);
}
