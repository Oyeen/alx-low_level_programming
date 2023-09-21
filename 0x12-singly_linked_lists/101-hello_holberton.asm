#include "lists.h"

/**
 * print_list - will safely print a linked list.
 * @head: represents the list of type list_t to print
 *
 * Return: represents the number of nodes in the list
 */
size_t print_list(const list_t *head)
{
	size_t num = 0;
	long int diff;

	while (head)
	{
		diff = head - head->next;
		num++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (diff > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (num);
}
