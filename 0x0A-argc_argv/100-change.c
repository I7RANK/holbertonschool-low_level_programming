#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the minimum number of coins to make change for an amount
 * of money
 * Description: 0 if the the number passed as the argument is negative
 * followed by a new line
 * @argc: is the number of command line arguments
 * @argv: is an array containing the program command line arguments
 * Return: 1 if the number of arguments is not exactly 1
 */

int main(int argc, char *argv[])
{
	int cents, welto;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	while (cents != 0)
	{
		if (cents >= 25)
		{
			welto++;
			cents -= 25;
		}
		else if (cents >= 10)
		{
			welto++;
			cents -= 10;
		}
		else if (cents >= 5)
		{
			welto++;
			cents -= 5;
		}
		else if (cents >= 2)
		{
			welto++;
			cents -= 2;
		}
		else if (cents >= 1)
		{
			welto++;
			cents -= 1;
		}
	}
	printf("%d\n", welto);
	return (0);
}
