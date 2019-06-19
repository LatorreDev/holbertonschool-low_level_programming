#include "sort.h"
/**
 * selection_sort - Selection sort algoritm
 *
 * @array: Size of the array
 * @size: Size of the array
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j;
	int min_num_id;

	if (array != NULL && size >= 2)
	{
		for (i = 0; i < size - 1; i++)
		{
			min_num_id = i;
			for(j = i + 1; j < size - 1; j++)
				if (array[j] > array[min_num_id])
					min_num_id = j;
			swap(&array[min_num_id], &array[i]);
			print_array(array, size);
		}
	}
	else
		return;
}
