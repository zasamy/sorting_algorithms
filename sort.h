#ifndef sort_h
#define sort_h

#include <stdlib.h>
#include <stdio.h>

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

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void swap(int *x, int *y);
int lomuto_partition(int *array, size_t size, int el1, int el2);
void sortpart(int *array, int el1, int el2, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);

size_t list_len(listint_t *list);
void switch_nodes(listint_t **list, listint_t **p);
void cocktail_sort_list(listint_t **list);

#endif
