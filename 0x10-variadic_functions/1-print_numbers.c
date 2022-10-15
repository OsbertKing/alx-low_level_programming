#include "variadic_functions.h"

/**
 * print_numbers - output numbers
 * @seperator : seperator
 * @n : ammount
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	register unsigned int i;

	va_list n1;

	va_start(n1, n);
	for (i = 0; i < n; i++)
		printf("%i%s", va_arg(n1, int), (seperator && i != n - 1) ? seperator : "");
	va_end(n1);
	printf("\n");
}
