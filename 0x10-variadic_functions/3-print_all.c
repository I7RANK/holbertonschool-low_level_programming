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
	char *separa = ", ", *s;

	va_start(valist, format);

	while (format[i])
	{
		if (format[i + 1] == '\0')
			separa = "";

		switch (format[i])
		{
		case 'c':
			printf("%c%s", va_arg(valist, int), separa);
			break;
		case 'i':
			printf("%d%s", va_arg(valist, int), separa);
			break;
		case 'f':
			printf("%f%s", va_arg(valist, double), separa);
			break;
		case 's':
			s = va_arg(valist, char *);
			if (*s == '\0')
				printf("(nil)%s", separa);
			else
				printf("%s%s", s, separa);
			break;
		}
		i++;
	}
	printf("\n");
	va_end(valist);
}
