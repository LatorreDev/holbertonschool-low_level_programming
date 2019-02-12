#include "holberton.h"

/**
 * _isalpha - entry point
 *  @c: the character to print
 *  Return: 0 if uppercase and 1 is lowercase
 *
*/

int _isalpha(int c)
{
int value;
if (c >= 65 && c <= 122)
value = 1;
else
value = 0;


return (value);

}
