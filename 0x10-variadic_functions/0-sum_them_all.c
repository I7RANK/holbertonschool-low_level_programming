#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all it's parameters
 * @n: is the number of parameters
 * Return: 0 if @n == 0 or the sum otherwise
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list inumbers;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(inumbers, n);

	for (i = 0; i < n; i++)
		sum += va_arg(inumbers, int);

	va_end(inumbers);

	return (sum);
}
