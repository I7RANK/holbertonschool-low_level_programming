#include "variadic_functions.h"

void print_c(va_list copy);
void print_i(va_list copy);
void print_f(va_list copy);
void print_s(va_list copy);

/**
 * print_all - prints anything, followed by a new line
 * @format: is the format for know that print
 * Return: na
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	int i = 0, j;
	char *sepa = "";

	select_p select[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s}
	};

	va_start(valist, format);

	while (format[i])
	{
		j = 0;
		while (j <= 3)
		{
			if (format[i] == select[j].f[0])
			{
				printf("%s", sepa);
				(select[j].p)(valist);
				sepa = ", ";
			}
			j++;
		}
		i++;
	}

	va_end(valist);
	printf("\n");
}

/**
 * print_c - prints a character
 * @copy: is the va_list variable
 * Return: na
 */
void print_c(va_list copy)
{
	printf("%c", va_arg(copy, int));
}

/**
 * print_i - prints a int
 * @copy: is the va_list variable
 * Return: na
 */
void print_i(va_list copy)
{
	printf("%d", va_arg(copy, int));
}

/**
 * print_f - prints a float
 * @copy: is the va_list variable
 * Return: na
 */
void print_f(va_list copy)
{
	printf("%f", va_arg(copy, double));
}

/**
 * print_s - prints a string
 * @copy: is the va_list variable
 * Return: na
 */
void print_s(va_list copy)
{
	char *va = va_arg(copy, char *);

	if (*va == '\0')
	{
		printf("(nil)");
		return;
	}
	printf("%s", va);
}
