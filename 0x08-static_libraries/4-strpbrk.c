#include "holberton.h"

/**
* _strpbrk - entry point
* Return: array
* @s: array
* @accept: second array
*
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0 ; s[i] ; i++)
	{
		for (j = 0 ; accept[j] ; j++)
		{
			if (accept[j] == s[i])
				return (s + i);
		}
	if (accept[j] == s[i])
		return (s + i);
	}
return (0);
}
