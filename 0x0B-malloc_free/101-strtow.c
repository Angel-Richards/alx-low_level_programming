#include "main.h"
#include <stdlib.h>

void util(char **, char *);
void create_word(char **, char *, int, int, int);

/**
 * strtow - splits a string into words.
 * @str: the string
 *
 * Return: returns a pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	int a, f, l;
	char **words;

	if (str == NULL || str[0] == '\0' || (str[0] == ' ' && str[1] == '\0'))
		return (NULL);

	a = f = l = 0;
	while (str[a])
	{
		if (f == 0 && str[a] != ' ')
			f = 1;
		if (a > 0 && str[a] == ' ' && str[a - 1] != ' ')
		{
			f = 0;
			l++;
		}
		a++;
	}

	l += f == 1 ? 1 : 0;
	if (l == 0)
		return (NULL);

	words = (char **)malloc(sizeof(char *) * (l + 1));
	if (words == NULL)
		return (NULL);

	util(words, str);
	words[l] = NULL;
	return (words);
}

/**
 * util - a util function for fetching words into an array
 * @words: the strings array
 * @str: the string
 */
void util(char **words, char *str)
{
	int a, j, st, f;

	a = j = f = 0;
	while (str[a])
	{
		if (f == 0 && str[a] != ' ')
		{
			st = a;
			f = 1;
		}

		if (a > 0 && str[a] == ' ' && str[a - 1] != ' ')
		{
			create_word(words, str, st, a, j);
			j++;
			f = 0;
		}

		a++;
	}

	if (f == 1)
		create_word(words, str, st, a, j);
}

/**
 * create_word - creates a word and insert it into the array
 * @words: the array of strings
 * @str: the string
 * @start: the starting index of the word
 * @end: the stopping index of the word
 * @index: the index of the array to insert the word
 */
void create_word(char **words, char *str, int start, int end, int index)
{
	int i, j;

	i = end - start;
	words[index] = (char *)malloc(sizeof(char) * (i + 1));

	for (j = 0; start < end; start++, j++)
		words[index][j] = str[start];
	words[index][j] = '\0';
}
