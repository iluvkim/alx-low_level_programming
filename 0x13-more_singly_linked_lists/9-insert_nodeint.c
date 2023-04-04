#include "lists.h"
/**
 * insert_nodeint_at_index - adds a new node to a linked list
 *                           at a given position
 * @head : pointer to the head of the list
 * @idx  : index of the list where the new node will be added
 *         (indices start at 0)
 * @n    : value for the new node to be added
 * Return: pointer to the new node,
 *         or NULL - if function fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *tmp = *head;
	listint_t *new;

	do {
		if (i == idx)
			break;
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
		i++;
	} while (tmp != NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	} else if (tmp != NULL)
	{
		new->next = tmp->next;
		tmp->next = new;
	} else
	{
		free(new);
		return (NULL);
	}

return (new);
	}
