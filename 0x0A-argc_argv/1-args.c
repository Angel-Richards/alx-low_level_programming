#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints number of arguments
 * @argc: size of argv
 * @argv: string of arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char **argv)
{
	(void)argc;

	printf("%d\n", argc - 1);

	return (0);
}
