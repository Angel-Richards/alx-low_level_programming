#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocates memory for array
 * @nmemb: number of elements
 * @size: size of bytes
 * Return: pointer to allocated memory
 * If nmemb or size is 0, then return NULL
 * If malloc fails, then return NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int a;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < (nmemb * size); a++)
	{
		ptr[a] = 0;
	}

	return (ptr);
}
