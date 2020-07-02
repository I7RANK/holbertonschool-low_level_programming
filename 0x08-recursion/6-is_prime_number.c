#include "holberton.h"

/**
 * check - perform the operations and checks if it is a prime number or not
 * Description: no description for this
 * @n: is the number
 * @i: is the number for the operations
 * Return: return 1 if the number is prime or 0 otherwise
 */
int check(int n, int i)
{
	if ((n % i) == 0)
		return (0);
	if ((i * i) > n)
		return (1);
	return (check(n, i + 1));
}

/**
 * is_prime_number - Check if the entered number is prime or not
 * Description: prints 0 or 1
 * @n: is the number
 * Return: return 1 if the number is prime or 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (check(n, 2));
}
