#include "lists.h"
#include <stdlib.h>

/**
 * free_listint1 - Frees a list.
 * @head: Address of the first node of a list.
 **/

void free_listint1(list_t **head)
{
	list_t *temp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
