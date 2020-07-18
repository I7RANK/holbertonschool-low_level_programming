#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: is the string to separate the numbers
 * @n: is the number of parameters
 * Return: na
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list inumbers;
	unsigned int i;

	if (n == 0)
		return;

	if (separator == NULL)
		separator = "";

	va_start(inumbers, n);

	for (i = 0; i < n - 1; i++)
	{
		printf("%d%s", va_arg(inumbers, int), separator);
	}

	printf("%d", va_arg(inumbers, int));

	va_end(inumbers);
	printf("\n");
}
