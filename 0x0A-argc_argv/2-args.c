#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints all arguments
 * @argc: size of argv
 * @argv: string of arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argv;
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
