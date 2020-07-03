#include "holberton.h"
#include <stdio.h>

/**
 * main - prints its name
 * Description: followed by a new line
 * @argc: is the number of command line arguments
 * @argv: is an array containing the program command line arguments
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
