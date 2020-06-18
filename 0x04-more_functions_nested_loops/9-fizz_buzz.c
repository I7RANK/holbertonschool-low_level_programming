#include "holberton.h"
#include <stdio.h>
/**
 * main - the test of "Fizz-Buzz"
 * Description: followed by a new line
 * Return: return 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i < 100)
			putchar(32);
	}
	putchar(10);
	return (0);
}
