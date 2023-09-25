#include "lists.h"

/**
 * listint_len - the number of elements.
 * @h: this is a pointer to a list.
 * Return: an integer.
 **/

size_t listint_len(const listint_t *h)
{
	const listint_t *tp;
	unsigned int cnr = 0;

	tp = h;
	while (tp)
	{
		cnr++;
		tp = tp->next;
	}
	return (cnr);
}
