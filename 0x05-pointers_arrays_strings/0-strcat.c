#include "holberton.h"

/**
* *_strcat - entry point
*
* @dest: argument
* @src: argument
* Return: always success 0
*
*/

char *_strcat(char *dest, char *src)
{

	int i, j;

	for (i = 0 ; dest[i] != '\0'; i++)
	{

	}

	for (j = 0 ; src[j] ; j++)
	{
		dest[i + j] = src[j];
	}

	dest[i + j] = '\0';

	return (dest);

}
