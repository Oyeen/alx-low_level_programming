#include "main.h"

/**
 * get_bit - returns the value of the index of a bit
 * @n: bits
 * @index: checks the bit
 *
 * Return: the value of the bit at a certain index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int div, res;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	div = 1 << index;
	res = n & div;
	if (res == div)
		return (1);

	return (0);
}
