#include "variadic_functions.h"

/**
 * print_char - function prints a char
 *
 * @arg: a list of argument pointing
 *	to the character to be printed
 *
 * Return: 0
 */

void print_char(va_list arg)
{
	char c = va_arg(arg, int);

	printf("%c", c);
}

/**
 * print_int - function prints an integer
 *
 * @arg: a list of argument pointing
 *	to the character to be printed
 *
 * Return: 0
 */

void print_int(va_list arg)
{
	int n = va_arg(arg, int);

	printf("%d", n);
}

/**
 * print_float - function prints a float
 *
 * @arg: a list of argument pointing
 *	to the character to be printed
 *
 * Return: 0
 */

void print_float(va_list arg)
{
	float n = va_arg(arg, double);

	printf("%f", n);
}

/**
 * print_string - function prints a string
 *
 * @arg: a list of argument pointing
 *	to the character to be printed
 *
 * Return: 0
 */

void print_string(va_list arg)
{
	char *str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - function prints all types
 *
 * @format: A string of character representing
 *	the argument types
 *
 * Description: If any argument not of type char,
 *		int, float or char * is ignored
 *
 * Return: 0
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, j = 0;
	char *separator = "";
	func_printer funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(ap, format);

	while (format && format[i])
	{
		j = 0;
		/**
		* 4 equals to the number of funcs present
		* so if j is less than four and our current
		* format is not equal to format in funcs
		* then j becomes j + 1
		*/
		while (j < 4 && (format[i] != *(funcs[j].symbol)))
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print_func(ap);
			separator = ", ";
		}
		i++;
	}
	printf("\n");

	va_end(ap);
}
