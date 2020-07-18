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

	if (n == 0)
		return;

	if (separator == NULL)
		sparador = "";

	va_start(inumbers, n);

	for (i = 0; i < n - 1; i++)
	{
		s = va_arg(inumbers, char *);
		if (*s == '\0')
			printf("(nil)%s", separator);
		else
			printf("%s%s", s, separator);
	}
	s = va_arg(inumbers, char *);
	if (*s == '\0')
		printf("(nil)");
	else
		printf("%s", s);

	va_end(inumbers);
	printf("\n");
}
