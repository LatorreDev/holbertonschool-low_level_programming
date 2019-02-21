#include "holberton.h"

/**
 * print_line - entry point
 * @n: entry variable
*/

void print_diagonal(int n)
	{
	int i;
	int j;
		for (i = 0 ; i < n ; i++)
		{
		if (i < j)
			_putchar(32);
		for (j = 0 ; j == i ; j++)
			{
			_putchar('\\');
			_putchar('\n');
			}
		}
	}
