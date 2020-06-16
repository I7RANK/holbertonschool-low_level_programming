#include "holberton.h"
/**
 * _islower - check if the character is lowercase
 * Description: if the character is lowercase it returns 1 but it returns 0
 * @c: is the parameter
 * Return: 0 or 1.
 */
int _islower(int c)
{
	int i = 0;

	if (c > 96 && c < 123)
		i = 1;

	return (i);
}
