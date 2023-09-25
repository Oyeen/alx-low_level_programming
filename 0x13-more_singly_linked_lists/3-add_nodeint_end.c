#include "lists.h"
#include <stdlib.h>

/**
 * add_node_end - Add a new node at the end of a list.
 * @head: Address of the first node of a list.
 * @n: An integer to insert in the new node.
 * Return: Address of the new node.
 **/

list_t *add_node_end(list_t **head, const int n)
{
	list_t *temp, *temp2;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}

	temp2 = *head;
	while (temp2->next)
		temp2 = temp2->next;
	temp2->next = temp;
	return (temp);
}
