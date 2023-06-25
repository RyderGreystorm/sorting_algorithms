#include "sort.h"

/**
 * sawp_list - swaps nodes in a linkedlist
 * @head: head pointer
 * @node1: previous node
 * @node2: next node
 */

void swap_list(listint_t **head, listint_t *node1, listint_t *node2)
{
	if (node1 == NULL || node2 == NULL)
		return;
	if (node1->prev != NULL)
		node1->prev->next = node2;
	else
		*head = node2;

	if (node2->next != NULL)
		node2->next->prev = node1;

	node1->next = node2->next;
	node2->prev = node1->prev;
	node2->next = node1;
	node1->prev = node2;
}

/**
 * insertion_sort_list - perfroms an insertion sort using the
 * insertion sort algorithm
 * @list: pointer to a pointer in a doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp = NULL;
	listint_t *curr = NULL;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	curr = (*list)->next;

	while (curr != NULL)
	{
		tmp = curr;
		while (tmp->prev != NULL && tmp->n < tmp->prev->n)
		{
			swap_list(list, tmp->prev, tmp);
			print_list(*list);
		}
		curr = curr->next;
	}
}
