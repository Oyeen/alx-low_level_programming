#include "main.h"

/**
 * clear_bit - value of a bit to 0 at a specific position
 * @n: number  of i
 * @index: the bit, starting from 0.
 * Return: returns 1 and -1 on error.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 6 - 1))
		return (-1);
	i = ~(1 << index);
	*n = *n & i;

	return (1);
}
