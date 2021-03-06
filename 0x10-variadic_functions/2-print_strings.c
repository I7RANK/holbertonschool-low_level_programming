#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: is the string to separate the numbers
 * @n: is the number of parameters
 * Return: na
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list inumbers;
	unsigned int i;
	char *s;

	if (separator == NULL)
		separator = "";

	va_start(inumbers, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(inumbers, char *);
		if (s == NULL)
			s = "(nil)";
		if (i == 0)
			printf("%s", s);
		else
			printf("%s%s", separator, s);
	}

	va_end(inumbers);
	printf("\n");
}
