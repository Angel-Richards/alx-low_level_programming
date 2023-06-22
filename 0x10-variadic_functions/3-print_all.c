#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints all of the arguments when specified
 * @format: specifies the necessary operations
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int d;
	int flag;
	char *str;
	va_list li;

	va_start(li, format);
	d = 0;
	while (format != NULL && format[d] != '\0')
	{
		switch (format[d])
		{
			case 'c':
				printf("%c", va_arg(li, int));
				flag = 0;
				break;
			case 'i':
				printf("%i", va_arg(li, int));
				flag = 0;
				break;
			case 'f':
				printf("%f", va_arg(li, double));
				flag = 0;
				break;
			case 's':
				str = va_arg(li, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				flag = 0;
				break;
			default:
				flag = 1;
				break;
		}
		if (format[d + 1] != '\0' && flag == 0)
			printf(", ");
		d++;
	}
	printf("\n");
	va_end(li);
}
