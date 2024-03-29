#include "variadic_functions.h"

/**
 * print_all - print all formats
 * @format: format
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *str, *sep = "";
	va_list arg;

	va_start(arg, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(arg, int));
					break;
				case 'i':
					printf("%s%i", sep, va_arg(arg, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(arg, double));
					break;
				case 's':
					str = va_arg(arg, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(arg);
}
