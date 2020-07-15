#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - this sum two numbers
 * @a: the first number
 * @b: the second number
 * return: the result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - this subtract two numbers
 * @a: the first number
 * @b: the second number
 * return: the result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - this multiplicates two numbers
 * @a: the first number
 * @b: the second number
 * return: the result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - this divide two numbers
 * @a: the first number
 * @b: the second number
 * return: the result
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - this returns the rest of the division
 * @a: the first number
 * @b: the second number
 * return: the result
 */
int op_mod(int a, int b)
{
	return (a % b);
}
