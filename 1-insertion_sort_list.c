#include "sort.h"

/**
 * insertion_sort_list - sorts a list by removing and inserting
 * @list: pointer to a linked list
 * Return: none - void function
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *head = NULL;
	listint_t *tmp1 = NULL, *tmp2 = NULL, *A = NULL, *B = NULL;

	if (!list || !(*list) || !((*list)->next))
		return;

	head = *list;
	while (head)
	{
		tmp1 = head;
		tmp2 = head->next;

		while (tmp1 && tmp2 && (tmp1->n > tmp2->n))
		{
			B = tmp2->next;
			A = tmp1->prev;

			tmp1->next = B;
			if (B)
				B->prev = tmp1;
			tmp1->prev = tmp2;

			tmp2->prev = A;
			if (A)
				A->next = tmp2;
			else
				*list = tmp2;
			tmp2->next = tmp1;
			tmp1 = A;
			print_list(*list);
		}
		head = tmp2;
	}
}
