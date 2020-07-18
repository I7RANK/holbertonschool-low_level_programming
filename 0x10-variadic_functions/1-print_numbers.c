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

	if (separator == NULL)
		separator = "";

	va_start(inumbers, n);

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", va_arg(inumbers, int));
		else
			printf("%s%d", separator, va_arg(inumbers, int));
	}

	va_end(inumbers);
	printf("\n");
}
