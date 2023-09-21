#include "lists.h"
#include <stdlib.h>

/**
 * add_node_end - Adds a new node at the end of a list.
 * @head: Address of the first node.
 * @n: an integer to insert new node.
 * Return: Address of the new node.
 **/

list_t *add_node_end(list_t **head, const int n)
{
	list_t *hulk, *hulk2;

	hulk = malloc(sizeof(listint_t));
	if (hulk == NULL)
		return (NULL);

	hulk->n = n;
	hulk->next = NULL;

	if (*hulk == NULL)
	{
		*hulk = hulk;
		return (hulk);
	}
	
	hulk2 = *head;
	while (hulk2->next)
		hulk2 = hulk2->next;
	hulk2->next = hulk;
	return (hulk);
}
