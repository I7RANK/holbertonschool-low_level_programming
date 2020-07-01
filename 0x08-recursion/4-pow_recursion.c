#include "holberton.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * Description: if y is lower than 0, the function return -1
 * @x: is the number
 * @y: is the power of @n
 * Return: return the power value
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);

	return (x * _pow_recursion(x, y - 1));
}
