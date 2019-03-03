#include "holberton.h"

/**
 *  _abs - entry point
 *  @n: the character to print
 *  Return: n character
 *
*/

int _abs(int n)
{
if (n >= 0)
return (n);
else
{
n = n * -1;
return (n);
}
}
