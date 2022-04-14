#include "variadic_functions.h"

/**
 * print_strings - function prints strings, followed by a new line
 *
 * @separator: points to a constant separator
 * @n: start of input variables
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int index;
	char *str;

	/* iterate the argument list from the start */
	va_start(a, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(a, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator && index != n - 1)
			printf("%s", separator);
	}
	/*clean up*/
	va_end(a);
	printf("\n");
}
