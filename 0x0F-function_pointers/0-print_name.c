#include "function_pointers.h"

/**
 * print_name - prints a name using a function pointer
 * @name: is the name
 * @f: is the function pointer
 * Return: na
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
