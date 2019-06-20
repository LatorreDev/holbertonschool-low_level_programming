#include "sort.h"
#include <stdio.h>
/**
 * insertion_sort_list - Insert sort algoritm
 *
 * @list: Size of the array
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *copy;

	copy = (*list)->next;
	while (copy)
	{
		while (copy->prev && copy->n < copy->prev->n)
		{
			copy->prev->next = copy->next;
			if (copy->next)
				copy->next->prev = copy->prev;
			ins_swap(copy);
			if (!copy->prev)
				*list = copy;
			else
				copy->prev->next = copy;
			print_list(*list);
		}
		copy = copy->next;
	}
}

/**
 * ins_swap - Insert sort swap
 *
 * @copy: Header of the linked list
 */
void ins_swap(listint_t *copy)
{
	copy->next = copy->prev;
	copy->prev = copy->prev->prev;
	copy->next->prev = copy;
}
