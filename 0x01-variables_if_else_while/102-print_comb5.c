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
int i, a, b, c;

for (i = 48; i <= 57; i++)
{
for (a = 48; a <= 56; a++)
{
for (b = i; b <= 57; b++)
{
for (c = 48; c <= 57; c++)
{
putchar(i);
putchar(a);

putchar(32);

putchar(b);

if (i == b)
{
if (c <= a)
c = a + 1;
}

putchar(c);

if (i == 57 && a == 56 && b == 57 && c == 57)
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
}
}

return (0);
}
