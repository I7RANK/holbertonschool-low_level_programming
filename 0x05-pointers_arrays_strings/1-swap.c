#include "holberton.h"
/**
 * swap_int - swaps the values of a two integers
 * Description: strcpy
 * @a: is the first integer
 * @b: is the second integer
 * Return: no return
 */
void swap_int(int *a, int *b)
{
	int copy = *a;

	*a = *b;
	*b = copy;
}
