#include "sort.h"
/**
 * insertion_sort_list - function that sort a doubly linked list
 *				in ascending order.
 * @list: pointer to pointer of the head of the list.
 *
 * Return: Void.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *ptr, *tmp = NULL, *tracker;

	ptr = (*list)->next;
	while (ptr != NULL)
	{
		tmp = ptr->prev;
		tracker = ptr;
		while (ptr->prev != NULL && ptr->n < tmp->n)
		{
			if (tmp->prev != NULL)
				(tmp->prev)->next = ptr;
			if (ptr->next != NULL)
				(ptr->next)->prev = tmp;
			ptr->prev = tmp->prev;
			tmp->next = ptr->next;
			ptr->next = tmp;
			tmp->prev = ptr;
			tmp = ptr->prev;
			if (ptr->prev == NULL)
				*list = ptr;
			print_list(*list);
		}
		ptr = tracker->next;
	}
}
