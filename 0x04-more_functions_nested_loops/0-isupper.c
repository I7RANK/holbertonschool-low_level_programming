#include "holberton.h"
/**
 * _isupper - checks if the parameter is uppercase
 * Description: followed a new line
 * @c: is the parameter
 * Return: return 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
	int r = 0;

	if (c >= 65 && c <= 90)
		r = 1;

	return (r);
}
