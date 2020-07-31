#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: the number
 * @index: the index :v
 *
 * Return: 0 if is ok or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int add = 1;

	if (index > 63)
		return (-1);

	add <<= index;

	*n = *n | add;

	*n = *n ^ add;
	return (1);
}
