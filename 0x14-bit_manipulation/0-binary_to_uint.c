#include "main.h"

/**
 * binary_to_uint - a function that converts binary number
 * to unsigned integer
 * @b: pointer to binary string
 * Return: converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int un;
	int c;

	un = 0;
	if (!b)
		return (0);
	for (c = 0; b[c] != '\0'; c++)
	{
		if (b[c] != '0' && b[c] != '1')
			return (0);
	}
	for (c = 0; b[c] != '\0'; c++)
	{
		un <<= 1;
		if (b[c] == '1')
			un += 1;
	}
	return (un);
}
