#include <stdio.h>
#include <stdarg.h>

/**
* print_all - entry point
* @format: entry argument
*/

void print_all(const char * const format, ...)
{
	int counter = 0;
	va_list my_list;
	char *c;

	va_start(my_list, format);

	while (format[counter] != '\0')
	{
		switch (format[counter])
		{
			case 'c':
				printf("%c", va_arg(my_list, int));
				break;
			case 'i':
				printf("%i", va_arg(my_list, int));
				break;
			case 'f':
				printf("%f", va_arg(my_list, double));
				break;
			case 's':
			c = va_arg(my_list, char *);
				printf("%s", va_arg(my_list, char *));
				if (!c)
				{
					printf("%p", c);
					break;
				}
					printf("%s", c);
				break;
			default:
				break;
		}
		if (format[counter + 1] != '\0')
			printf(", ");
		counter++;
	}
	printf("\n");
	va_end(my_list);
	}
