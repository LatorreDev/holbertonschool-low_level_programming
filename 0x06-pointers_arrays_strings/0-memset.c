#include "holberton.h"

/**
* _memset - entry point
* Return: array
* @s: array
* @b: value
* @n: int
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;

	}
return (s);
}
