#include "main.h"
/**
 * _strlen_recursion - returns length of a string
 * @s: string to measure
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}

	return (i);
}
