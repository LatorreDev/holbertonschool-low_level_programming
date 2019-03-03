#include "holberton.h"

/**
 * _isdigit - entry point
 *
 * @c: return value
 *
 * Return: 1 if is a digit
 *
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);

return (0);
}
