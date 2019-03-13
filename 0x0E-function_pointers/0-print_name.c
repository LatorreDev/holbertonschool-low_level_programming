#include <stdio.h>
#include "function_pointers.h"

/**
* print_name - entry point
* @name: entry variable
* @f: entry variable
*/

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		(*f) (name);
}
