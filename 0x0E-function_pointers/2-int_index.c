#include "function_pointers.h"

/**
* int_index - entry point
* @array: entry array
* @size: array size
* @cmp: pointer
* Return: if true return matches
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int counter;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (counter = 0 ; counter < size ; counter++)
	{
		if ((*cmp) (array[counter]))
			return (counter);
	}
	return (-1);
}
