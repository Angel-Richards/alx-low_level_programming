#include "main.h"
/**
 * _strlen - retrns the length of a string
 * @s: string
 * Return: string length
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
