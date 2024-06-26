#include "main.h"

int check_pal(char *s, int r, int l);
int _strlen_recursion(char *s);


/**
 * is_palindrome - checks if a string is a palindrome or not
 * @s: the string to reverse
 * Return: 1 if it is, 0 if it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns length of string
 * @s: the string to calculate the length of
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks the characters recursively for palindrome
 * @s: string to check
 * @r: iterator
 * @l: length of the string
 * Return: 1 if palindrome, 0 if not
 */
int check_pal(char *s, int r, int l)
{
	if (*(s + r) != *(s + l - 1))
		return (0);
	if (r >= l)
		return (1);
	return (check_pal(s, r + 1, l - 1));
}
