#include "main.h"

/**
 * binary_to_uint- converts a binary number to an unsigned int.
 * @b: pointer to a string of characters, 0 and 1
 *
 * Return: number converted or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int k;

	k = 0;
	if (!b)
		return (0);
	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
	}
	for (a = 0; b[a] != '\0'; a++)
	{
		k <<= 1;
		if (b[a] == '1')
			k += 1;
	}
	return (k);
}
