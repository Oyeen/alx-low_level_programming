#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints elements of a singly linked list.
 * @h: Pointer to a list.
 * Return: an integer.
 **/

size_t print_list(const list_t *h)
{
	const list_t *sp;
	unsigned int cntr = 0;

	sp = h;
	while (sp)
	{
		printf("%d\n", sp->n);
		cntr++;
		sp = sp->next;
	}
	return (cntr);
}
