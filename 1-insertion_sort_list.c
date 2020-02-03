#include "sort.h"
/**
 * insertion_sort_list - Insertion sort
 * @list: Double pointer
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *pos;

	if (list == NULL || *list == NULL)
		return;

	pos = (*list)->next;

	while (pos != NULL)
	{
		while (pos->prev != NULL && pos->n < pos->prev->n)
		{
			pos->prev->next = pos->next;

			if (pos->next != NULL)
				pos->next->prev = pos->prev;

			pos->next = pos->prev;
			pos->prev = pos->prev->prev;
			pos->next->prev = pos;

			if (pos->prev != NULL)
				pos->prev->next = pos;
			else
				*list = pos;

			print_list(*list);
		}
		pos = pos->next;
	}
}
