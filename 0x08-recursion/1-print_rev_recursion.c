#include "main.h"
/**
 * _print_rev_recursion - functions like puts();
 * @s : string
 * Return: 0 (Success)
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
