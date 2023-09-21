#include "lists.h"

/**
 * listint_len - Calculate the number of elements.
 * @h: a pointer to a list.
 * Return: number of nodes.
 **/

size_t list_len(const list_t *h)
{
	const list_t *s;
	unsigned int cnr = 0;

	s = h;
	while (tp)
	{
		cnr++;
		s = s->next;
	}
	return (cnr);
}
