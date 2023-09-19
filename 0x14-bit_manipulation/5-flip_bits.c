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
	int a, flips = 0;
	unsigned long int c;
	unsigned long int x = n ^ m;

	for (a = 50; a >= 0; a--)
	{
		c = x >> a;
		if (c & 1)
			flips++;
	}
	return (flips);
}

