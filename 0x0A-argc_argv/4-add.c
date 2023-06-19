#include <stdlib.h>
#include <stdio.h>
/**
 * main - adds positiive numbers
 * @argc: size of argv
 * @argv: string of arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i, j, sum = 0;
	char *symb;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; argv[i]; i++)
	{
		j = strtol(argv[i], &symb, 10);
		if (*symb)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += j;
		}
	}
	printf("%d\n", sum);

	return (0);
}
