#include "sort.h"

/**
 * swap_nodes - swap nodes
 * @list: list
 * @node: node
 * Return: void
 */
void swap_nodes(listint_t **list, listint_t *node)
{
	listint_t *prev_node = node->prev;
	if (prev_node == NULL || node == NULL)
		return;
	if (prev_node->prev != NULL)
		prev_node->prev->next = node;

	prev_node->next = node->next;
	if (node->next != NULL)
		node->next->prev = prev_node;
	node->next = prev_node;
	prev_node->prev = node;

	if (node->prev == NULL)
		*list = node;
}

/**
 * insertion_sort_list - insertion sort doubly linked list
 * @list: List to sort
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node, next_node;

	if (list == NULL || *list == NULL)
		return;
        node = (*list)->next;
	while (node != NULL)
	{
		next_node = node->next;
		while (node->prev != NULL && node->prev->n > node->n)
		{
			swap_nodes(list, node);
			print_list(*list);
		}
		node = next_node;
	}
}
