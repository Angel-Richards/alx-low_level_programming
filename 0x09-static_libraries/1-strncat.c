#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int d;
	int f;

	d = 0;
	while (dest[d] != '\0')
	{
		d++;
	}
	f = 0;
	while (f < n && src[f] != '\0')
	{
		dest[d] = src[f];
		d++;
		f++;
	}
	dest[d] = '\0';
	return (dest);
}
