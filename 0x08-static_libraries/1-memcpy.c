#include "holberton.h"

/**
* _memcpy - entry point
* Return: array
* @dest: array
* @src: value
* @n: int
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];

	}
return (dest);
}
