#include "holberton.h"

/**
 * multi - search for n by multiplying 1 by 1
 * Description: only if it is natural and equal to @n returns @i
 * @n: is the number
 * @i: the index
 * Return: i or -1 in case of error
 */
int multi(int n, int i)
{
	if ((i * i) == n)
		return (i);
	if ((i * i) > n)
		return (-1);
	return (multi(n, (i + 1)));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * Description: if @n does not have a natural square root, return -1
 * @n: is the number
 * Return: return the natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (multi(n, 0));
}
