#include "holberton.h"

/**
* swap_int - entry point
* @a: First argument
* @b: Second Argument
*/

void swap_int(int *a, int *b)
{

	int c=98;

	c = *a;
	*a = *b;
	*b = c;
}

