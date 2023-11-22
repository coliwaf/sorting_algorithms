#include "sort.h"

/**
 * insert_sort_list - Sorts a double linked list of integers
 * in ascending order using the insertion sort algorithm
 *
 * @list: list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr = NULL, *temp = NULL;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	curr = *list;
	curr = curr->next;
	while (curr)
	{
		while (curr->prev && curr->n < (curr->prev)->n)
		{
			temp = curr;
			if (curr->next)
				(curr->next)->prev = temp->prev;
			(curr->prev)->next = temp->next;
			curr = curr->prev;
			temp->prev = curr->prev;
			temp->next = curr;
			if (curr->prev)
				(curr->prev)->next = temp;
			curr->prev = temp;
			if (temp->prev == NULL)
				*list = temp;
			print_list(*list);
			curr =  curr->prev;
		}
		curr = curr->next;
	}
}
