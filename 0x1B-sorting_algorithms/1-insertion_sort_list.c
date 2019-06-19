#include "sort.h"
/**
 * bubble_sort - Bubble sort algoritm
 *
 * @array: Size of the array
 * @size: Size of the array
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *copy;
	copy = *list;
	while(copy)
	{
		if(copy->prev)
		{
			if(copy->n < copy->prev->n)
			{
				printf("Debugg antes:: %d\n", copy->n);
				ins_swap(copy, copy->prev);
				print_list(*list);
				printf("Debugg:: despues %d\n", copy->n);
				ins_reverse(copy);
			}

		}
		copy = copy->next;
	}

}

/**
 * ins_swap - Insert sort swap
 *
 * @head: Header of the linked list
 * @prev: prev pointer to the l.l
 */
void ins_swap(listint_t *head, listint_t *prev)
{
	listint_t *temp = NULL;

	(void)prev;
	(void)head;
	temp = malloc(sizeof(listint_t));
	if(temp == NULL)
		return;
	else
	{
		temp->next = head->next;
		temp->prev = prev->prev;
		temp->prev->next = head;
		temp->next->prev = prev;
	}
	head->prev = temp->prev;
	head->next = prev;
	prev->prev = head;
	prev->next = temp->next;
	free(temp);
}


/**
 * ins_reverse - Iterate in reverse
 *
 * @head: Header of the linked list
 */
void ins_reverse(listint_t *head)
{
	listint_t *copy = head;

	while(copy && (copy->prev->n > copy->n))
	{
		if(copy->prev->n > copy->n)
			ins_swap(copy, copy->prev);
		printf("::DEBUGG:: %d\n",copy->n);
		copy = copy->prev;
	}
}
