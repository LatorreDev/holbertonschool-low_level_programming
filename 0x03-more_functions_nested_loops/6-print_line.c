#include "holberton.h"

/**
 * print_line - entry point
 * @n: entry variable
 */

void print_line(int n)
{
int i = 0;
while (i < n)
{
_putchar('_');
i++;
}
_putchar('\n');
}
