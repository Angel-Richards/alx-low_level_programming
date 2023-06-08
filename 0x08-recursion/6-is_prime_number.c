#include "main.h"

/**
 * prime_number - checks if number is prime
 * @g:int
 * @k:int
 * Return: 1 if n is a prime number, else 0
 */
int prime_number(int g, int k)
{
	if (k < 2 || k % g == 0)
	{
		return (0);
	}
	else if (g > k / 2)
	{
		return (1);
	}
	else
	{return (prime_number(g + 1, k));
	}
}

/**
 * is_prime_number - states if number is prime
 * @n:int
 * Return: 1 if n is a prime number, else 0
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime_number(2, n));
}
