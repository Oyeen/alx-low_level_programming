#include "lists.h"
#include <stdlib.h>

/**
 * add_node - to add a new node at the beginning of a list.
 * @head: The address of the first node.
 * @n: Integer to insert into the new node.
 * Return: Address of the new node.
 **/

list_t *add_node(list_t **head, const int n)
{
	listint_t *tp;

	tp = malloc(sizeof(list_t));
	if (tp == NULL)
		return (NULL);

	tp->n = n;
	tp->next = *head;
	*head = tp;
	return (*head);
}
