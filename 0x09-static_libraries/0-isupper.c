#include "main.h"
/**
 * _isupper - uppercase letters
 * @c: char to check
 * Return: 0 if uppercase or 1 if lower
 */
int _isupper(int c);
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
