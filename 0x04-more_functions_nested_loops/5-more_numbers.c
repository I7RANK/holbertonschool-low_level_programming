#include "holberton.h"
/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 * Description: followed by a new line
 */
void more_numbers()
{
	int i, a = 0, b;

	while (a < 10)
	{
		for (i = 0; i <= 1; i++)
		{
			for (b = 0; b <= 9; b++)
			{
				if (i == 1)
					_putchar(49);

				_putchar(b + '0');

				if (i == 1 && b == 4)
					b = 10;
			}
		}

		_putchar(10);
		a++;
	}
}
