#ifndef SORT_H
#define SORT_H
/* Libraries */
#include <stdlib.h>
#include <stddef.h>
/* Structs */

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* Aux funcs */
void bubble_swap(int *first, int *second);

/* Prototypes */

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

/* Aux funcs */
void swap(int *first, int *second);
void ins_swap(listint_t *copy);
void ins_reverse(listint_t *head);
#endif /* SORT_H */
