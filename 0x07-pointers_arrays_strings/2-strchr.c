#include "holberton.h"

/**
 * _strchr - locates a character in a string
 * Description: Returns a pointer to the first occurrence of the character
 * c in the string s
 * @s: is the array
 * @c: is the character
 * Return: a pointer from the first appearance or null if the character
 * is not found
 */
char *_strchr(char *s, char c)
{
	int i;
	char *ret;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		{
			ret = &s[i];
			break;
		}
		else
		{
			ret = '\0';
		}
	}
	return (ret);
}
