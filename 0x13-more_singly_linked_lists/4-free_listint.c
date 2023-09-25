#include "lists.h"
#include <stdlib.h>

/**
 * @head: The address of the first node of a list
 * free_list - will free a list
 **/

void free_list(list_t *head)
{
	list_t *tp, *tp2;

	tp = head;
	while (tp != NULL)
	{
		tp2 = tp->next;
		free(tp);
		tp = tp2;
	}
}
