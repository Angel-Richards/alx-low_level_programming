#include "main.h"
/**
 * get_bit - gets a bit at index
 * @n: the number to get the bit from
 * @index: index of the bit to retrieve
 *
 * Return: value of the bit, or -1 if error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
