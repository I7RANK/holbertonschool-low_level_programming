#include "holberton.h"
/**
 * times_table - prints the 9 times tables, starting with 0
 * Description: the space betwen each , is 3 character are filled with space
 * Return: no return
 */
void times_table(void)
{
	int i, multi, prod = 0;

	for (i = 0; i <= 9; i++)
	{
		_putchar(0 + '0');
		for (multi = 1; multi <= 9; multi++)
		{
			prod = i * multi;
			_putchar(44);
			_putchar(32);
			if ((prod / 10) == 0)
			{
				_putchar(32);
			}
			else
			{
				_putchar((prod / 10) + '0');
			}

			_putchar((prod % 10) + '0');
		}
		_putchar(10);
	}
}
