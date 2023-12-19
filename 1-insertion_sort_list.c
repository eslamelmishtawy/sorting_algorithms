#include "sort.h"

/**
 * insertion_sort_list - function to sort array
 * @list: pointer to list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current = *list;
	listint_t *tmp = NULL;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	current = current->next;
	while (current)
	{
		while (current->prev && current->n < (current->prev)->n)
		{
			tmp = current;
			if (current->next)
				(current->next)->prev = tmp->prev;
			(current->prev)->next = tmp->next;
			current = current->prev;
			tmp->prev = current->prev;
			tmp->next = current;
			if (current->prev)
				(current->prev)->next = tmp;
			current->prev = tmp;
			if (tmp->prev == NULL)
				*list = tmp;
			print_list(*list);
			current = current->prev;
		}
		current = current->next;
	}
}
