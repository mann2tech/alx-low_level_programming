#include "lists.h"
#include <stdio.h>

/**
 * print_list - print linked list elements 
 * @h: linked list
 *
 * Return: no of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nbr_nodes = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		printf("[%d] %s\n", current->len,
		current->str != NULL ? current->str : "(nil)");
		current = current->next;
		nbr_nodes++;
	}
	return (nbr_nodes);
}
