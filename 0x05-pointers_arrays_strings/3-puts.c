#include "main.h"
/**
 * _puts - function prints string followed by new line
 * @str: input
 * Return: 0
 */
void _puts(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}
