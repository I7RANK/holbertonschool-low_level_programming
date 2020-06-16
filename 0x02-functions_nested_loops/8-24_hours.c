#include "holberton.h"
/**
 * jack_bauer - prints every minutes of the day
 * Description: start form 00:00 to 23:59
 * Return: no return
 */
void jack_bauer(void)
{
	int min, min2, seg, seg2;

	for (min = 0; min <= 2; min++)
	{
		for (min2 = 0; min2 <= 9; min2++)
		{
			for (seg = 0; seg <= 5; seg++)
			{
				for (seg2 = 0; seg2 <= 9; seg2++)
				{
					_putchar(min + '0');
					_putchar(min2 + '0');
					_putchar(58);
					_putchar(seg + '0');
					_putchar(seg2 + '0');
					_putchar(10);

					if (min == 2 && min2 == 3 && seg == 5 && seg2 == 9)
					{
						min = 10;
						min2 = 10;
						seg = 10;
						seg2 = 10;
					}
				}
			}
		}
	}
}
