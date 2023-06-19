#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the min number of coins to make change
 * @argc: size of argv
 * @argv: string of arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int amount, count;
	unsigned int n;
	char *c;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	total = strtol(argv[1], &c, 10);
	count = 0;

	if (!*c)
	{
		while (amount > 1)
		{
			for (n = 0; n < sizeof(cents[n]); n++)
			{
				if (amount >= cents[n])
				{
					count += amount / cents[n];
					amount = amount % cents[n];
				}
			}
		}
		if (amount == 1)
			count++;
	}
	else
	{
		printf("Error\n");
		return (0);
	}
	printf("%d\n", count);
	return (0);
}
