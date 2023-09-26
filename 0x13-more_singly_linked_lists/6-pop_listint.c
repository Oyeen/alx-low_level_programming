#include "lists.h"

/**
 * del_listint - will delete the head node of a linked list
 * @head: points to the first element of a linked list
 *
 * Return: returns the content of the data deleted
 * also returns 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
