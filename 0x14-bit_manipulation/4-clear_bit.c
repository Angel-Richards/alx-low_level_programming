#include "main.h"
/**
 * clear_bit - function that sets a bit to 0 at given index
 * @n: pointer to the unsigned long int containing  bit
 * @index: the index of the bit
 *
 * Return: 1 on Success, or -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	*n &= ~(1UL << index);

	return (1);
}
