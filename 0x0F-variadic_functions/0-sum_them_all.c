#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - Entry point
* @n: entry arg 2
* Return: always sucess
*/

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);

/* initialize valist for num number of arguments */
	va_list valist;

/* Declarations */
	int sum = 0;
	unsigned int counter;

/* access all the arguments assigned to valist */
	va_start(valist, n);

	for (counter = 0 ; counter < n ; counter++)
	{
		sum += va_arg(valist, int);
	}

/* clean memory reserved for valist */
	va_end(valist);

	return (sum);
}
