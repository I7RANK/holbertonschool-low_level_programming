#include "holberton.h"
/**
 * rev_string - reverses a string
 * Description: followed by a new line
 * @s: is the string
 * Return: no return
 */
void rev_string(char *s)
{
	int l = 0, i;
	char c1, c2;

	while (s[l] != '\0')
	{
		l++;
	}

	l--;

	for (i = 0; i <= l; i++)
	{
		c1 = s[i];
		c2 = s[l];

		s[i] = c2;
		s[l] = c1;
		l--;
	}
}
