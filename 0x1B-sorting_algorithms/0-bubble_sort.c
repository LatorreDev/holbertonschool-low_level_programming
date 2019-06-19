#include "sort.h"
/**
 * bubble_sort - Bubble sort algoritm
 *
 * @array: Size of the array
 * @size: Size of the array
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i, j = 0;

	if (array != NULL && size >= 2)
	{
		for (i = 0; i < size - 1; i++)
		{
			for (j = 0; j < size - 1 ; j++)
			{
				if (array[j] > array[j + 1])
				{
					swap(&array[j], &array[j + 1]);
					print_array(array, size);
				}
			}
		}
	}
	else
		return;
}

/**
* bubble_swap - swap for the bubble sort
*
* @first: entry int
* @second: entry int
*/

void swap(int *first, int *second)
{
	int temp = 0;

	temp = *first;
	*first = *second;
	*second = temp;
}
