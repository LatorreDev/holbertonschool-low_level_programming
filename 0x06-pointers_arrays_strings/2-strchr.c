#include "holberton.h"

/**
* _strchr - entry point
* Return: array
* @s: array
* @c: value
*/

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0 ; s[i] ; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
if (s[i] == c)
	return (&s[i]);
return(0);
}
