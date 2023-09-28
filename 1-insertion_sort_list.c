#include "sort.h"
/**
 * insertion_sort_list - sorts doubly linked list in ascending order
 * @list: the doubly list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *a, *b, *c;
	int insert;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	a = (*list)->next;
	while (a != NULL)
	{
		b = a;
		while (b->prev != NULL)
		{
			insert = 0;
			if (b->n < b->prev->n)
			{
				if (b->prev->prev != NULL)
					b->prev->prev->next = b;
				b->prev->next = b->next;
				c = b->prev->prev;
				b->prev->prev = b;
				if (b->next != NULL)
					b->next->prev = b->prev;
				b->next = b->prev;
				b->prev = c;
				insert = 1;
				if (b->prev == NULL)
					*list = b;
				print_list(*list);
			}
			if (insert == 0)
				b = b->prev;
		}
		a = a->next;
	}
}
