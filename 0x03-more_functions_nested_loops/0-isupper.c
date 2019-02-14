#include "holberton.h"

/**
 * _isupper - entry point
 *
 * @c: return value
 *
 * Return: 1 if uppercase
 *
 */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
return (1);

return (0);
}
