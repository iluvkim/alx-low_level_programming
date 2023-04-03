#include "list.h"
#include <stdio.h>

/**
 * print_listint - Print elements of a singly linked list.
 * @h: Pointer to a list.
 *
 * Return: number of nodes in the list
 **/
size_t print_listint(const listint_t *h);
{
	size_t count = 0;
	const listint_t *cursor = h;

	while (h)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
