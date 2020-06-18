#include "holberton.h"
/**
 * _isdigit - checks if the parameter is a digit
 * Description: return 1 if c is a digit or 0 otherwise
 * @c: is the parameter
 */
int _isdigit(int c)
{
	int r = 0;
	if (c >= 48 && c <= 57)
		r = 1;

	return r;
}
