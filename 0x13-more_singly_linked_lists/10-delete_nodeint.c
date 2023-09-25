#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Delete a node at a position.
 * @head: Address of the first node.
 * @index: Position of the node to be deleted.
 * Return: returns 1 on success.
 **/

int delete_node_at_index(list_t **head, unsigned int index)
{
	unsigned int i;
	list_t *current, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	current = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
	}
	next = current->next;
	current->next = next->next;
	free(next);
	return (1);
}
