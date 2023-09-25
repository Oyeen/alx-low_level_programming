#include "lists.h"
#include <stdlib.h>

/**
 * del_listint - Deletes the first element of a singly linked list.
 * @head: This is a pointer to a list.
 * Return: Return an interger on success.
 **/

int del_listint(list_t **head)
{
	list_t *tp;
	int my_data;

	if (*head == NULL)
		return (0);

	tp = *head;
	*head = tp->next;
	my_task = tp->n;
	free(tp);
	return (my_task);
}
