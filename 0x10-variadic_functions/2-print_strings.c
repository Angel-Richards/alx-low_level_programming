#include "variadic_functions.h"

/**
 * print_strings - Prints strings passed to the function separed by separators
 * @separator: A string that is used to separate strings
 * @n: number of unnamed parameters
 * Return: Always 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *stri;
	unsigned int d;
	va_list ap;

	va_start(ap, n);
	if (separator == NULL)
		separator = "";

	for (d = 0; d < n; d++)
	{
		stri = va_arg(ap, char*);
		if (stri == NULL)
			stri = "(nil)";
		printf("%s", stri);
		if (d < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
