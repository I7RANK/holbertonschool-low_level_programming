#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, a, b;

	for (i = 48; i <= 55; i++)
	{
		for (a = i + 1; a <= 56; a++)
		{
			for (b = a + 1; b <= 57; b++)
			{
				putchar(i);
				putchar(a);
				putchar(b);
				if (i == 55 && a == 56 && b == 57)
				{
					putchar(10);
				}
				else
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}

	return (0);
}
