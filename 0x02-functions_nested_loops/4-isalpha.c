#include "holberton.h"
/**
 * _isalpha - check if the character is in the alphabet
 * Description: if the character is lowercase or uppercase it returns 1 but it
 * returns 0
 * @c: is the parameter
 * Return: 0 or 1.
 */
int _isalpha(int c)
{
	int i = 0;

	if ((c > 96 && c < 123) || (c > 64 && c < 91))
		i = 1;

	return (i);
}
