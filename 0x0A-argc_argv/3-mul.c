#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the multiplies of two numbers
 * Description: followed by a new line
 * @argc: is the number of command line arguments
 * @argv: is an array containing the program command line arguments
 * Return: 1 in case of error or 0 otherwise
 */

int main(int argc, char *argv[])
{
	int multi;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	multi = atoi(argv[1]);
	multi *= atoi(argv[2]);

	printf("%d\n", multi);
	return (0);
}
