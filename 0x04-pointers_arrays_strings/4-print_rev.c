#include "holberton.h"

/**
* print_rev - entry point
* @str: string array
*/

void print_rev(char *str)
{
	int j;

	for (j = 0 ; str[j] <= 0 ;j--)
	_putchar (str[j]);
	
}
