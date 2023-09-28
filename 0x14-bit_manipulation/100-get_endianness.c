#include "main.h"
/**
 * get_endianness - checks endianness
 *
 * Return: returns 0 for a big endian, 1 for a little endian
 */
int get_endianness(void)
{
	int i;
	char *c;

	i = 1;
	c = (char *)&i;

	return (*c);
}
