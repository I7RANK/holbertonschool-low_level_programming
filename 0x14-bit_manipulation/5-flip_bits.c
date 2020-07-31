#include "holberton.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get
 * from one number to another (@m to @n).
 * @n: the first number
 * @m: the number to find the bits to flip
 *
 * Return: the number of bits that need to turn
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor;
	int i = 0;

	/* XOR only is 1 if is different */
	xor = n ^ m;

	while (xor)
	{
		i += xor & 1;
		xor >>= 1;
	}

	return (i);
}
