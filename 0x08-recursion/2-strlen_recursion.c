#include "main.h"
/**
 * _strlen_recursion - Return length of string
 * @s : string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int b = 0;

	if (*s)
	{
		b++;
		b += _strlen_recursion(s + 1);
	}
	return (b);
}
