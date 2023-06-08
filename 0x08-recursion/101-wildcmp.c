#include "main.h"

/**
 * str_checker - check if two strings are identical.
 * @s1: string_1 base address.
 * @s2: string_2 base address.
 * @l: left index.
 * @j: special index. (joker)
 * Return: 1 if s is palindrome, 0 otherwise.
 */
int str_checker(char *s1, char *s2, int l, int j)
{
	if (s1[l] == '\0' && s2[j] == '\0')
		return (1);
	if (s1[l] == s2[j])
		return (str_checker(s1, s2, l + 1, j + 1));
	if (s1[l] == '\0' && s2[j] == '*')
		return (str_checker(s1, s2, l, j + 1));
	if (s2[j] == '*')
		return (str_checker(s1, s2, l + 1, j) || str_checker(s1, s2, l, j + 1));
	return (0);
}
/**
 * wildcmp - check if strings could be considered identical
 * @s1: base address for string.
 * @s2: base address for string.
 *
 * Return: 1 if are considered identical.
 */
int wildcmp(char *s1, char *s2)
{
	return (str_checker(s1, s2, 0, 0));
}
