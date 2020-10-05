#include "holberton.h"

/**
 * print_number - prints a number with _putchar
 * @n: is the number to print
 *
 * Return: na
*/
void print_number(int n)
{
    int num_p, divi = 1;

    if (n < 0)
    {
        n *= -1;
        _putchar('-');
    }
    num_p = n;

    while (n / divi >= 10)
    {
        num_p /= divi;
        divi *= 10;
    }
    num_p = n;
    while (divi > 0)
    {
        num_p /= divi;
        
        _putchar(num_p + 48);
        num_p = n % divi;
        divi /= 10;
    }
}
