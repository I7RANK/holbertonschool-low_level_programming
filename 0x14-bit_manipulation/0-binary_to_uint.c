#include "holberton.h"

/**
 * binary_to_uint - coverts a binary number to an usigned int
 * @b: the string of number binary
 *
 * Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int finder = 1, num = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{}

	i--;
	for (; i >= 0; i--, finder *= 2)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		if (b[i] == '1')
			num += finder;
	}

	return (num);
}
