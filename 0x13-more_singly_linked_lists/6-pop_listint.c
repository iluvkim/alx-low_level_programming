#include "lists.h"

/**
 * pop_listint - Delete the first element of a singly linked list.
 * @head: Pointer to a list.
 * Return: head node's data (n) or 0 if the link list is empty
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	tmp = *head;

	do {
		*head = (*head)->next;
		free(tmp);
	} while (0);

	return (n);
}
