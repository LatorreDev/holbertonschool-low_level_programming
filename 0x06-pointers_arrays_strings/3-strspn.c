#include "holberton.h"

/**
* _strspn - entry point
* Return: array
* @s: array
* @accept: second array
*
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int k = 0;

	for (i = 0 ; s[i] ; i++)
	{
		for (j = 0 ; accept[j] ; j++)
		{
			if (s[i] == accept[j])
				k++;
		}
	if (i > j)
		break;
	}
return (i);
}
