#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_numbers - entry point
* @separator: entry string
* @n: entry argument
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	if (separator != NULL)
	{
		va_list my_list;
		unsigned int counter;

		va_start(my_list, n);

		for (counter = 0 ; counter < n; counter++)
		{
			printf("%i", va_arg(my_list, int));
			if (counter < n - 1)
				printf("%s", separator);
		}
		printf("\n");
		va_end(my_list);
	}
}
