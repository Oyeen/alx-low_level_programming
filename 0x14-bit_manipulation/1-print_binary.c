#include "main.h"

/**
 * @base: exponent base
 * @pow:exponent power
 * _power - base and power
 * Return: value of base and power
 */

unsigned long int _power(unsigned int base, unsigned int pow)
{
	unsigned long int num;
	unsigned int a;

	num = 1;
	for (a = 1; a <= pow; a++)
		num *= base;
	return (num);
}
/**
 * print_binary - prints number in binary form
 * @n: num of printed number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int dev, result;
	char flag;

	flag = 0;
	dev = _power(2, sizeof(unsigned long int) * 8 - 1);

	while (dev != 0)
	{
		result = n & dev;
		if (result == dev)
		{
			flag = 1;
			_putchar('1');

		}
		else if (flag == 1 || dev == 1)
		{
			_putchar('0');
		}
		dev >>= 1;
	}
}
