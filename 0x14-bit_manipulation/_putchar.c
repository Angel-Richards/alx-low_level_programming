#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes character to stdout
 * @c: character to print
 *
 * Return: 1 on Success
 * return -1 on error, errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
