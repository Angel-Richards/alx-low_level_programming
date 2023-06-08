#include "main.h"

/**
 * squareroot - finds the natural square root
 * @g:int
 * @k:int
 *
 * Return: int
 */
int squareroot(int g, int k)
{
	if (g * g == k)
		return (g);
	if (g * g > k)
		return (-1);
	return (squareroot(g + 1, k));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (squareroot(1, n));
}
