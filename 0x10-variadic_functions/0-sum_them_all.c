#include "variadic_functions.h"

/**
 * sum_them_all - function adds all its parameters
 *
 * @n: start of input variables
 *
 * Return: resulting sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int para, sum = 0;

	va_start(list, n);

	for (para = 0; para < n; para++)
		sum += va_arg(list, int);
	/*Clean up*/
	va_end(list);

	return (sum);
}
