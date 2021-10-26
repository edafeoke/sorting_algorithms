#include "sort.h"

/**
 * insertion_sort_list - a function that sorts a doubly linked list of
 * integers in ascending order using the Insertion sort algorithm
 * @list: doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *previous, *start, *end;

	if (*list == NULL)
		return;
	current = *list;
	while (current)
	{
		previous = current->prev;
		while (previous && previous->n > current->n)
		{
			start = previous->prev;
			end = current->next;
			if (start)
				start->next = current;
			if (end)
				end->prev = previous;
			previous->next = end;
			previous->prev = current;
			current->next = previous;
			current->prev = start;
			if (!start)
				*list = current;
			print_list(*list);
			previous = current->prev;
		}
		current = current->next;
	}
}
