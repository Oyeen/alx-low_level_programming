#include "lists.h"
#include <stdlib.h>

/**
 * insert_node_at_index - Index of a new node at a given positiion.
 * @head: Address of the new node.
 * @idx: Position of the new node to be inserted in.
 * @n: Data of the new node.
 * Return: Address of the new node.
 **/

list_t *insert_node_at_index(list_t **head, unsigned int idx, int n)
{
	list_t *new_node, *temp;
	unsigned int i = 0;

	if (*head == NULL && idx != 0)
		return (NULL);
	if (idx != 0)
	{
	temp = *head;
	for (; i < idx - 1 && temp != NULL; i++)
		temp = temp->next;
	if (temp == NULL)
		return (NULL);
	}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
