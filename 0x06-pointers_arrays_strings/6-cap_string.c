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

	if (a[0] >= 97 && a[0] <= 122)
	{
		isupp = a[0];
		isupp = isupp - 32;
		a[0] = isupp;
	}

	while (a[i] != '\0')
	{
		isupp = a[i];

		if (a[i] == 32 || a[i] == 9 || a[i] == 10 || a[i] == ','
		    || a[i] == ';' || a[i] == '.' || a[i] == '!'
		    || a[i] == '?' || a[i] == '"' || a[i] == '('
		    || a[i] == ')' || a[i] == '{' || a[i] == '}')
		{
			capi = 1;
		}
		else
		{
			if (isupp >= 97 && isupp <= 122 && capi == 1)
			{
				if ((a[i - 1] >= 65 && a[i - 1] <= 90) ||
				    (a[i - 1] >= 48 && a[i - 1] <= 57))
					capi = 0;

				if (capi == 1)
				{
					isupp = isupp - 32;
					a[i] = isupp;
					capi = 0;
				}
			}
		}
		i++;
	}
	return (a);
}
