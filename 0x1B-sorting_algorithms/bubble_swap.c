#include "sort.h"
/**
* bubble_swap - swap for the bubble sort
*
* @first: entry int
* @second: entry int
*/

void bubble_swap(int *first, int *second)
{
	int temp = 0;

	temp = *first;
	*first = *second;
	*second = temp;
}
