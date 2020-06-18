#include <stdio.h>
/**
 * main - prints the largest prime factor of the number 612852475143
 * Description: followed by a new line
 * Return: return 0
 */
int main(void)
{
	long int i, n = 612852475143, fact;


	while (n != 1)
	{
		for (i = 2; i <= n; i++)
		{
			if (n % i == 0)
			{
				if (i >= fact)
					fact = i;

				n = n / i;
				i = n + 1;
			}
		}
	}
	printf("%ld\n", fact);
	return (0);
}
