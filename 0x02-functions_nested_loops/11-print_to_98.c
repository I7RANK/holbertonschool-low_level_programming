#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers fron n to 98
 * Description: the numbers be separated by commas and followed by a space
 * @n: is the natural number
 * Return: no return
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		if (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		else if (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("%d\n", n);
}
