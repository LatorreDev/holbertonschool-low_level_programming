#include "holberton.h"

/**
 * print_most_numbers - entry point
 *
 */

void print_most_numbers(void)
{
int a;
for (a = 48 ; a <= 57 ; a++)
{
if (a != 50 && a != 52)
_putchar(a);
}
_putchar('\n');
}
