#include "main.h"
/**
 * set_bit - a function that sets a bit at given index to 1
 * @n: The number to set bit in
 * @index: the index to set bit at
 *
 * Return: 1 on Success, or -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	a = 1 << index;
	*n = *n | a;

	return (1);
}
