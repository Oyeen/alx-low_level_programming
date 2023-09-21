#include "lists.h"
#include <stdlib.h>

/**
 * add_node - a function that adds a new node at the beginning of a list.
 * @head: Address of the first node.
 * @n: an integer to insert into the new node.
 * Return: Address of the new node.
 **/

list_t *add_node(list_t **head, const int n)
{
	list_t *sp;

	tp = malloc(sizeof(listint_t));
	if (sp == NULL)
		return (NULL);
	sp->n = n;
	sp->next = *head;
	*head = sp;
	return (*head);
}
