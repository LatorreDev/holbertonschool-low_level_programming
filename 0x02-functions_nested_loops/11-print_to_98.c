#include "holberton.h"

/**
 *  add - entry point
 *  @a: print the value
 *  @b: print the value
 *
 *  Return: an addition between two parameters
 *
*/

void print_to_98(int n)
{
for (n;n<98;n++)
{
printf("%i, ",n);
}
if (n==98)
{
_putchar(n);
}
else
{
for(n;n>=98;n--)
{
printf("%i, ",n);
}
}
}



