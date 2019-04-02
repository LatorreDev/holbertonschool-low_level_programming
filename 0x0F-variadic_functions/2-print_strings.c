#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
*print_strings - entry point
*@separator: entry string
*@n: entry argument
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	if (separator != NULL)
	{
		va_list my_list;
		unsigned int counter;
		char *my_little_var;

		va_start(my_list, n);

		for (counter = 0 ; counter < n; counter++)
		{
			my_little_var = va_arg(my_list, char *);
			if (my_little_var == NULL)
				printf("(nil)");
			else
				printf("%s", my_little_var);
			if (counter < n - 1)
				printf("%s", separator);
		}
		printf("\n");
		va_end(my_list);
	}

