#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node by a given
 *                           index of a linked list
 * @head : pointer to the head of the list
 * @index: index of the node to be deleted
 *         (indices starting at 0)
 * Return: 1 - if function succeeds,
 *        -1 - if function fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (*head == NULL)
	{
		return (-1);
	}
	listint_t *tmp = *head;
	listint_t *prev = NULL;
	unsigned int i = 0;

	do {
		if (i == index)
		{
			if (prev == NULL)
			{
				*head = tmp->next;
			} else
			{
				prev->next = tmp->next;
			}
			free(tmp);
			return (1);
		}
		prev = tmp;
		tmp = tmp->next;
		i++;
	}	while (tmp != NULL);

	return (-1);
}
