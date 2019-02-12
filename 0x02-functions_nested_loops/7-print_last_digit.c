#include "holberton.h"

/**
 *  print_last_digit - entry point
 *  @n: the character to print
 *  Return: n character
 *
*/

int print_last_digit(int n)
{
        n = n%10;
        if (n > 0)
        {
        _putchar(n + '0');
        }

        else {
            n = n * -1;
        _putchar(n + '0');
            }
        return(n);
}
