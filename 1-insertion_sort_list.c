#include "sort.h"

/**
 * insertion_sort_list -  function that sorts an array of integers in ascending
 * order
 * @list: list to sort
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *curr = *list;
	listint_t *temp = NULL;

	curr = curr->next;
	while (curr)
	{
		temp = curr;
		while (curr->prev && curr->n < curr->prev->n)
		{
			curr->prev->next = temp->next;
			if (curr->next)
				curr->next->prev = temp->prev;
			curr = curr->prev;
			temp->next = curr;
			temp->prev = curr->prev;

			if (curr->prev)
				curr->prev->next = temp;
			else
				*list = temp;
			curr->prev = temp;
			print_list(*list);
			curr = curr->prev;
		}
		curr = curr->next;
	}
}
