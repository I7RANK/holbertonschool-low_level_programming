#include "variadic_functions.h"

/**
 * print_all - prints anything, followed by a new line
 * @format: is the format for know that print
 * Return: na
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	int i = 0;
	char *separa = "", *s;

	va_start(valist, format);

	while (format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%s%c", separa, va_arg(valist, int));
			break;
		case 'i':
			printf("%s%d", separa, va_arg(valist, int));
			break;
		case 'f':
			printf("%s%f", separa, va_arg(valist, double));
			break;
		case 's':
			s = va_arg(valist, char *);
			if (s == NULL)
				s = "(nil)";
			printf("%s%s", separa, s);
			break;
		}
		separa = ", ";
		i++;
	}

	va_end(valist);
	printf("\n");
}
