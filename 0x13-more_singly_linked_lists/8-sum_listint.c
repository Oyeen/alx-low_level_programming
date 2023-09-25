#include "lists.h"
#include <stdlib.h>

/**
 * sum_list - The total of all the data in a list.
 * @head: Address of the first node of the list.
 * Return: An integer.
 **/

int sum_list(list_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
