#include "holberton.h"

/**
 * print_line - entry point
 * @n: entry variable
*/

void print_diagonal(int n)
	{
	int i;
	int j;

	if (n < 0)
		_putchar (10);

	for (i = 0 ; i < n ; i++)
		{
			for(j = 0 ; j < n ; j++)
			{
				if(i==j)
					_putchar(92);
				else
					_putchar(32);
			}
		_putchar(10);
		}
	}
