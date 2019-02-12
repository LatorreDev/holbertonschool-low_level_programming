#include "holberton.h"

/**
 * _islower - entry point
 *  @c: the character to print
 *  Return: 0 if uppercase and 1 is lowercase
 *
*/

int _islower(int c)
{
int value;
if (c >= 97 && c <= 122)
value = 1;
else
value = 0;


return (value);

}
