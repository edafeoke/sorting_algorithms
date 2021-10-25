#include "sort.h"

/**
 * insertion_sort_list - a function that sorts a doubly linked list of
 * integers in ascending order using the Insertion sort algorithm
 * @list: doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *storeP, *storeN, *current, *previous;

	if (*list == NULL)
		return;
	current = *list;
	while (current)
	{
		previous = current->prev;
		while (previous && previous->n > current->n)
		{
		}
		current = current->next;
	}
}
