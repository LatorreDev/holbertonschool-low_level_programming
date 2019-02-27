#include "holberton.h"

/**
* _puts_recursion - entry point
* @s: array
*/

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
