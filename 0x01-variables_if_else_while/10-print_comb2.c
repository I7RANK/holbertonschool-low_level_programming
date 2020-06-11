#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, a;
for (i = 48; i <= 57; i++)
{
for (a = 48; a <= 57; a++)
{
putchar(i);
putchar(a);
if (i == 57 && a == 57)
{
putchar(10);
}
else
{
putchar(44);
putchar(32);
}
}
}

return (0);
}
