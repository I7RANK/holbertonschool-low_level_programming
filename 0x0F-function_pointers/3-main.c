#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - request the data and call the function
 * @argc: number of arguments
 * @argv: array of arguments
 * return: 98 if the numbers of arguments is incorrect
 * 99 if the operator it's none of the above
 * 100 if the user try dividing (/ or %) by 0
 */
int main(int argc, char *argv[])
{
	int calc, num1, num2;
	char *operator;

	int (*calc_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);

	if (*operator != '+' && *operator != '-' && *operator != '*' &&
	    *operator != '/' && *operator != '%')
	{
		printf("Error\n");
		return (99);
	}

	if ((*operator == '/' || *operator == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	calc_func = get_op_func(operator);

	calc = calc_func(num1, num2);

	printf("%d\n", calc);
	return (0);
}
