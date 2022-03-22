#include "main.h"
/**
 * puts2 - prints every other character
 * @str: inputs string
 * Return: Nothing
 */
void puts2(char *str)
{
	int length = 0, i;

	while (str[length] != '\0')
		length++;
	for (i = 0; i < length; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
