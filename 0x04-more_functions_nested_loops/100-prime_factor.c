#include <stdio.h>
/**
 *
 *
 *
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
				n = n / i;
				i = n + 1;
				if (i >= fact)
					fact = i;
			}
		}
	}
	printf("%ld\n", fact);
	return (0);
}
