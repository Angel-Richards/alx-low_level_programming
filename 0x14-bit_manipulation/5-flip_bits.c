#include "main.h"
/**
 * flip_bits - A function that gets number of bits needed to flip
 * @n: first number
 * @m: second number
 *
 * Return: the number of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count;
	unsigned long int x = n ^ m;

	while (x)
	{
		count += (x & 1);
	}
	return (count);
}
