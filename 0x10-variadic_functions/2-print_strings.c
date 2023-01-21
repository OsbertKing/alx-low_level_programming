#include "variadic_functions.h"

/**
 * print_strings - prints given number of strings
 * @separator: sepaeator
 * @n: number of parameters
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	register unsigned int i;
	char *str;

	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (!str)
			str = "(nil)";

		printf("%s%s", str,
			(separator && i != n - 1) ? separator : "");
	}

	printf("\n");
	va_end(ap);
}
