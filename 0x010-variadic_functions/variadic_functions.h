#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdio.h>
#include <stdarg.h>

/**
 * struct print - the structure for print
 * @f: is the format char
 * @p: is the pointer function
 */
typedef struct print
{
	char *f;
	void (*p)();
} select_p;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
