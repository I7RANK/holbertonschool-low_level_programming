#include "holberton.h"

/**
 * _strpbrk - locates a substring in @haystack
 * Description: finds the first occurrence of the substring needle in the
 * string haystack. The terminating null bytes (\0) are not compared
 * @haystack: is the array
 * @needle: is the substring to find
 * Return: Returns a pointer to the byte in s that matches with the substring
 * or NULL if no such byte is found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, a, b, lsub, compa = -1;
	char *ret;

	for (lsub = 0; needle[lsub]; lsub++)
	{}

	lsub--;
	for (i = 0; haystack[i]; i++)
	{
		if (haystack[i] == needle[0])
		{
			b = i;
			for (a = 0; a <= lsub; a++)
			{
				if (haystack[b] == needle[a])
					compa = a;

				b++;
			}
		}
		if (compa == lsub)
		{
			ret = &haystack[i];
			break;
		}
		else
		{
			ret = '\0';
		}
	}
	return (ret);
}
