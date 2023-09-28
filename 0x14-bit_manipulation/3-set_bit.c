#include "main.h"

/**
 * set_bit - value of bit at a certain position
 * @index: required bit to set starting from 0
 * @n: points to i
 * Return: returns 1 and -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	i = 1 << index;
	*n = *n | i;

	return (1);
}
