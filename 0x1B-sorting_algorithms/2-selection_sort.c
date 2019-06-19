#include "sort.h"
/**
* swap - swap for the bubble sort
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
/**
 * selection_sort - Selection sort algoritm
 *
 * @array: Size of the array
 * @size: Size of the array
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j;
	int min_num_id, flag = 0;

	if (array != NULL && size >= 2)
	{
		for (i = 0; i < size - 1; i++)
		{
			min_num_id = i;
			for (j = i + 1; j < size; j++)
				if (array[j] < array[min_num_id])
				{
					min_num_id = j;
					flag = 1;
				}
			if (flag)
			{
				swap(&array[min_num_id], &array[i]);
				print_array(array, size);
				flag = 0;
			}
		}
	}
	else
		return;
}
