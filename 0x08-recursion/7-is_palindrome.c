#include "holberton.h"

/**
 * leng - checks the length of a string
 * Description: no description for now
 * @s: is the string
 * Return: return the leng of the string
 */
int leng(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + leng(s + 1));
}

/**
 * checkpalin - checks if the string is palindrome
 * Description: An empty string is a palindrome
 * @i: is the index
 * @lg: is the length of the string
 * @s: is the string
 * Return: 1 if is polindrome or 0 if not
 */
int checkpalin(int i, int lg, char *s)
{
	if (lg > 0)
	{
		if (s[i] == s[lg])
		{
			return (checkpalin(i + 1, lg - 1, s));
		}
		else if (s[i] != s[lg])
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (1);
}


/**
 * is_palindrome - Checks if a string is a palindrome
 * Description: An empty string is a palindrome
 * @s: is the string
 * Return: return 1 if the string is a palindrome or 0 otherwise
 */
int is_palindrome(char *s)
{
	return (checkpalin(0, leng(s) - 1, s));
}
