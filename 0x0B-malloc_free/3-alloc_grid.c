#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of array
 * @height: height of array
 *
 * Return: a pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **a, b, c;
	int l = width * height;

	if (l <= 0)
		return (NULL);

	a = (int **)malloc(sizeof(int *) * height);
	if (a == NULL)
		return (NULL);

	for (b = 0; b < height; b++)
	{
		a[b] = (int *)malloc(sizeof(int) * width);
		if (a[b] == NULL)
		{
			for (b--; b >= 0; b--)
				free(a[b]);
			free(a);
			return (NULL);
		}
	}

	for (b = 0; b < height; b++)
		for (c = 0; c < width; c++)
			a[b][c] = 0;

	return (a);
}
