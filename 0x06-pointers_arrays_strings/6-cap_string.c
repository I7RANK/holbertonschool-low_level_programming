#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string
 * Description: Separators of words: space, tabulation, new line, ,, ;, ., !,
 * ?, ", (, ), {, and }
 * @a: is the array
 * Return: return the pointer
 */
char *cap_string(char *a)
{
	int i = 0, isupp, capi = 0;

	while (a[i] != '\0')
	{
		isupp = a[i];
		if (a[i] == 32 || a[i] == 9 || a[i] == 10 || a[i] == ','
			|| a[i] == ';' || a[i] == '.' || a[i] == '!'
			|| a[i] == '?' || a[i] == '"' || a[i] == '('
			|| a[i] == ')' || a[i] == '{' || a[i] == '}')
		{
			if (a[i + 1] >= 97 && a[i + 1] <= 122)
				capi = 1;
		}
		else if (isupp >= 97 && isupp <= 122 && capi == 1)
		{
			isupp = isupp - 32;
			a[i] = isupp;
			capi = 0;
		}
		i++;
	}
	return (a);
}
