#include "main.h"
/**
 * _puts - function prints string followed by new line
 * @str: input
 * Return: 0
 */
void _puts(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}
	_putchar('\n');
}
