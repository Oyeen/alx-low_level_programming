#include "lists.h"
#include <stdlib.h>

/**
 * get_node_at_index - Finds node in a list.
 * @head: Address of the first node in a list.
 * @index: This is the index node to be found starting from 0.
 * Return: Address of the node.
 **/

list_t *get_node_at_index(list_t *head, unsigned int index)
{
	unsigned int y = 0;

	if (head == NULL)
		return (NULL);
	for (y = 0; y < index; y++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
