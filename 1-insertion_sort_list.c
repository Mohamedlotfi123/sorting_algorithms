#include "sort.h"
/**
 * insertion_sort - function that sort a doubly linked list in ascending order.
 * @list: pointer to pointer of the head of the list.
 *
 * Return: Void.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *ptr, *tmp = NULL;

	ptr = *list;
	while (ptr != NULL)
	{
			if (tmp != NULL && ptr->n < tmp->n)
			{
				while (tmp->prev != NULL && ptr->n < tmp->n)
					tmp = tmp->prev;
				if (tmp->prev != NULL)
				{
					(ptr->prev)->next = ptr->next;
					(tmp->next)->prev = ptr;
					ptr->next = tmp->next;
					ptr->prev = tmp;
					tmp->next = ptr;
				}
				else
				{
					tmp->next = ptr->next;
					tmp->prev = ptr;
					ptr->next = tmp;
					ptr->prev = NULL;
					if (tmp->next != NULL)
						(tmp->next)->prev = tmp;
					*list = ptr;
				}
				print_list(*list);
			}
			printf("%d\n", ptr->n);
			tmp = ptr;
			ptr = ptr->next;

	}
}
