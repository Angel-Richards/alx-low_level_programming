#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to the new array
 * if man > mix, returns NULL
 * if malloc fails, returns NULL
 */
int *array_range(int min, int max)
{
	int *a;
	int b;

	if (min > max)
	{
		return (NULL);
	}

	a = malloc(sizeof(*a) * ((max - min) + 1));

	if (a == NULL)
	{
		return (NULL);
	}

	for (b = 0; min <= max; b++, min++)
	{
		a[b] = min;
	}

	return (a);
}
