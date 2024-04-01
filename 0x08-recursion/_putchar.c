#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes c to stdout
 * @a: to print
 *
 * Return: 1 on success
 * return -1 on error. errno is set
 */

int _putchar(char a)
{
	return (write(1, &a, 1));
}
